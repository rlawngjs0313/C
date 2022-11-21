#include <stdio.h>

int power(int a, int b){
    if (b == 1){
        return a;
    }
    return a * power(a, --b);
}

int main(){
    int a, b;
    scanf("%d %d", &a, &b);
    printf("%d", power(a, b));
}