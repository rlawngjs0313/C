#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <Windows.h>
#define MIN_XY 5;
#define MAX_XY 15;

void moving(int x, int y)
{
    COORD pos;
    pos.X = 2 * x;
    pos.Y = y;
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), pos);
}

void Init(int *x, int *y)
{
    system("mode con:cols=70 lines=50");
    system("title 1010!");
    system("chcp 65001");
    system("cls");
    for (int i = *y; i < *y + 12; i++)
    {
        for (int j = *x; j < *x + 12; j++)
        {
            if (i == *y || i == *y + 11)
            {
                moving(j, i);
                printf("□");
            }
            else if (j == *x || j == *x + 11)
            {
                moving(j, i);
                printf("□");
            }
        }
    }

    *y += 15;
    *x = 4;

    for (int i = *y; i < *y + 10; i++)
    {
        for (int j = *x; j < *x + 22; j++)
        {
            if (i == *y || i == *y + 9)
            {
                moving(j, i);
                printf("□");
            }
            else if (j == *x || j == *x + 21)
            {
                moving(j, i);
                printf("□");
            }
        }
    }
}

int main()
{
    int x = 9, y = 4;
    Init(&x, &y);
    
    while (true)
    {
        
    }
}