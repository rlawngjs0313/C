#include <iostream>
#include <string>

typedef std::string Book;

int findError(Book books[][3], const int lastIdx, const int num){ // 2
    if (num < 0 || num > lastIdx-1){
        return 1;
    }
    else if (books[num][2] == "True"){
        return 2;
    }
    else{
        return 3;
    }
}

void removeOneByOne(Book books[][3], int *lastIdx, const int num){  // 3
    Book init[1][3] = {
        {"", "", "False"}
    };
    for (int i = num; i < 3; i++){
        for (int j = 0; j < 3; j++){
            if (i == 2){
                books[i][j] = init[0][j];
            }
            else{
                books[i][j] = books[i+1][j];
            }
        }
    }
    *lastIdx -= 1;
}

void rentBook(Book books[][3], const int lastIdx){  // 4
    int N = 0;
    std::cout << "대여하려는 도서 번호를 입력하세요: ";
    std::cin >> N;
    int bookResult = findError(books, lastIdx, N);
    if (bookResult == 1){
        std::cout << "대여할 수 있는 도서의 범위를 넘어갔습니다.";
    }
    else if (bookResult == 2){
        std::cout << "해당 도서는 이미 대여됐습니다.";
    }
    else{
        books[N][2] = "True";
    }
}

void returnBook(Book books[][3], const int lastIdx){    // 5
    int N = 0;
    std::cout << "반납하려는 도서 번호를 입력하세요: ";
    std::cin >> N;
    int bookResult = findError(books, lastIdx, N);
    if (bookResult == 1){
        std::cout << "반납할 수 있는 도서의 범위를 넘어갔습니다.";
    }
    else if (bookResult == 2){
        books[N][2] = "False";
    }
    else{
        std::cout << "대여하지 않은 도서는 반납할 수 없습니다.";
    }
}

void delBook(Book books[][3], int *lastIdx){    // 6
    int N = 0;
    std::cout << "삭제하려는 도서 번호를 입력하세요: ";
    std::cin >> N;
    int bookResult = findError(books, *lastIdx, N);
    if (bookResult == 1){
        std::cout << "삭제할 수 있는 도서의 범위를 넘어갔습니다.";
    }
    else if (bookResult == 2){
        std::cout << "대여된 도서는 삭제할 수 없습니다.";
    }
    else{
        removeOneByOne(books, &(*lastIdx), N);
    }
}

void addBook(Book books[][3], int *lastIdx){    // 7
    if (*lastIdx >= 3){
        std::cout << "더 이상 도서를 추가할 수 없습니다.";
    }
    else{
        Book name;
        Book author;
        Book temp = "False";
        std::cout << "책 이름을 입력하세요: ";
        std::cin >> name;
        std::cout << "저자 이름을 입력하세요: ";
        std::cin >> author;
        books[*lastIdx][0] = name;
        books[*lastIdx][1] = author;
        books[*lastIdx][2] = temp;
        *lastIdx += 1;
    }
}

void printBooks(const Book books[][3], const int lastIdx){  // 8
    std::cout << "==============================" << std::endl;
    for (int i = 0; i < lastIdx; i++){
        std::cout << "번호: " << i << std::endl;
        std::cout << "이름: " << books[i][0] << std::endl;
        std::cout << "저자: " << books[i][1] << std::endl;
        std::cout << "대여: " << ((books[i][2] == "True") ? "대여 중" : "대여 가능") << std::endl;
        std::cout << "==============================" << std::endl;
    }
}

int main(){
    bool loop = true;
    int N = 0;
    int lastIdx = 0;    // 도서 수
    Book Books[3][3] = {
        {"", "", ""},
        {"", "", ""},
        {"", "", ""}
    };

    while (loop){
        std::cout << "1. 대여, 2. 반납, 3. 추가, 4. 삭제, 5. 목록, 6. 종료\n번호를 입력하세요: ";
        std::cin >> N;
        if (N < 1 || N > 6){
            std::cout << "해당 번호는 사용할 수 없습니다.";
        }
        else{
            switch (N){
                case 1:
                    rentBook(Books, lastIdx);
                    break;
                case 2:
                    returnBook(Books, lastIdx);
                    break;
                case 3:
                    addBook(Books, &lastIdx);
                    break;
                case 4:
                    delBook(Books, &lastIdx);
                    break;
                case 5:
                    printBooks(Books, lastIdx);
                    break;
                case 6:
                    loop = false;
                    break;
            }
        }
        
    }   // 0
}