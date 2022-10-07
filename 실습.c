#include <stdio.h>

int main()
{
    int number = 2; //홀수, 짝수 판별할 변수 number 선언
    printf(number%2 ? "정수 %d는 홀수입니다.":"정수 %d는 짝수입니다.", number, number); // number가 2로 나누었을때 0이라면 짝수, 그 이상이라면 홀수임을 표현
}