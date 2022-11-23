#include <stdio.h>

int main()
{
    int N = 0;
    char result[100] = "";
    int pos = 0;
    scanf("%d", &N);

    while (pos > -1)
    {
        if (N == 0 || N == 1)
        {
            result[pos++] = N;
            break;
        }
        else
        {
            result[pos++] = N % 2;
            N /= 2;
        }
    }

    for (int i = 0; i < pos; i++)
    {
        printf("%c", result[i]);
    }
}