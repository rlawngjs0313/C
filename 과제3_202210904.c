#include <stdio.h>

void looping(int* N){
    if (*N < 1){
        return;
    }
    int temp = *N % 10;
    printf("%d", temp);
    *N /= 10;
    looping(&*N);
}

int main (){
    int data;
    scanf("%d", &data);
    looping(&data);
}