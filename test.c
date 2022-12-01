#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <conio.h>
#include <Windows.h>

int main()
{
    int temp[2][2];
    char BlockList[][5][5] = {
        {{'□'}},
        {{'□', '□'}},
        {{'□', '□', '□'}},
        {{'□', '□'},
         {'□', '□'}},
        {{'□', '□'},
         {'□', ' '}},
        {{'□', '□', '□', '□'}},
        {{'□', '□', '□', '□', '□'}},
        {{'□', '□', '□'},
         {'□', '□', '□'},
         {'□', '□', '□'}},
        {{'□', '□', '□'},
         {'□', ' ', ' '},
         {'□', ' ', ' '}}};

    for (int k = 0; k < 2; k++)
    {
        for (int m = 0; m < 2; m++)
        {
            for (int n = 0; n < 2; n++)
            {
                temp[m][n] = BlockList[3][1 - n][m];
            }
        }
        for (int m = 0; m < 2; m++)
        {
            for (int n = 0; n < 2; n++)
            {
                BlockList[3][m][n] = temp[m][n];
            }
        }
    }
}