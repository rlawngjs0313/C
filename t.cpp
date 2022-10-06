#include <iostream>
#include <iomanip>

int main () {
    int date, day;
    while (true) {
        std::cout << "한 달의 날짜 수를 입력하세요 (28, 29, 30, 31): ";
        std::cin >> date;
        if (date == 28 || date == 29 || date == 30 || date == 31) {
            break;;
        }
        std::cout << "날짜는 28 ~ 31 사이의 숫자만 입력 가능합니다." << std::endl;
    }
    while (true) {
        std::cout << "첫 날의 요일을 입력하세요(0-6): ";
        std::cin >> day;
        if (day == 0 || day == 1 || day == 2 || day == 3 || day == 4 || day == 5 || day == 6) {
            break;
        }
        std::cout << "0 ~ 6사이의 숫자를 입력해주세요." << std::endl;
    }

    std::cout << "Sun Mon Tue Wed Thr Fri Sat" << std::endl;
    for (int i = 0; i < 6; i++) {
        std::cout << "--- ";
    }
    std::cout << "--- " << std::endl;
    int cnt = -1*day;
    int end = 1;
    while (true) {
        if (cnt == date) {
            break;
        }
        if (cnt < 0) {
            std::cout << std::setw(3) << " " << " ";
            end ++;
            cnt ++;
            continue;
        }
        if (cnt == 0) {
            std::cout << std::setw(3) << (cnt+1) << " ";
            end ++;
            cnt ++;
            continue;
        }
        if (end % 7 == 0) {
            std::cout << std::setw(3) << (cnt+1) << std::endl;
            end ++;
            cnt ++;
            continue; 
        }
        std::cout << std::setw(3) << cnt+1 << " ";
        end ++;
        cnt ++;
    }
}
