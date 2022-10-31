#include <stdio.h>

int main() {
    char N;
    printf("문자를 입력하세요: ");
    scanf("%s", &N);
    
    if ((int)N >= 48 && (int)N <= 57){
        printf("숫자를 입력하셨습니다.");
    }
    else if ((int)N >= 65 && (int)N <= 90){
        printf("대문자를 입력하셨습니다.");
    }
    else if ((int)N >= 97 && (int)N <= 122){
        printf("소문자를 입력하셨습니다.");
    }
    else {
        printf("숫자, 대문자, 소문자 이외의 문자를 입력하셨습니다.");
    }
}