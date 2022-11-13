#include <stdio.h>

int fac(int num){
    if (num == 1){
        return 1;
    }
    return num * fac(num-1);
}

int main(){
    int num = 0;
    scanf("%d", &num);
    printf("%d", fac(num));
}