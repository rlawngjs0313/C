#include <stdio.h>
int main()
{
    int data = 0;
    printf("학번을 입력하세요: ");
    scanf("%d", &data);
    printf("%d\n", data);
    printf("%x\n", data);
    printf("%lf\n", (double)data);
    printf("%c\n", (char)data);
}