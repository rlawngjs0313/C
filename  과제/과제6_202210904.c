#include <stdio.h>

void cyclic_swap(int *a, int *b, int *c){
    int temp = *a;
    *a = *c;
    *c = *b;
    *b = temp;
}

int main(){
    int a, b, c;
    printf("Enter three integers a, b, c: ");
    scanf("%d %d %d", &a, &b, &c);
    printf("Before cyclic swap: a = %d, b = %d, c = %d \n", a, b, c);
    cyclic_swap(&a, &b, &c);
    printf("After cyclic swap: a = %d, b = %d, c = %d", a, b, c);
}