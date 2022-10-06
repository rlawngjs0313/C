#include <stdio.h>

int main()
{
    int L1[10] = {0};
    for(int _ = 0; _ < 10; _++){
        scanf("%d", &L1[_]);
        getchar();
    }
    for(int _ = 0; _ < 10; _++){
        printf("%d", L1[_]);
    }
}