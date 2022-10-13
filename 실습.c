#include <stdio.h>

int main()
{
    typedef int 정수;
    typedef double 실수;
    실수 Data[5][4] = {{0}, {0}, {0}, {0}, {0}};
    for (정수 i = 0; i < 5; i++)
    {
        정수 국어점수 = 0, 영어점수 = 0, 수학점수 = 0;
        printf("학생%d의 국어, 영어, 수학점수를 입력하세요. ex)80 70 80: ", i + 1);
        scanf("%d %d %d", &국어점수, &영어점수, &수학점수);
        실수 평균 = (국어점수 + 영어점수 + 수학점수) / 3.0;
        실수 Temp[4] = {평균, 국어점수, 영어점수, 수학점수};
        for (정수 j = 0; j < 4; j++)
        {
            Data[i][j] = Temp[j];
        }
    }
    for (정수 i = 0; i < 5; i++)
    {
        printf("___________________________________ : ");
        printf("학생%d의 평균: %.2lf \n", i + 1, Data[i][0]);
        printf("학생%d의 국어점수: %.0f \n", i + 1, Data[i][1]);
        printf("학생%d의 영어점수: %.0f \n", i + 1, Data[i][2]);
        printf("학생%d의 수학점수: %.0f \n", i + 1, Data[i][3]);
    }
}