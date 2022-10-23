#include <stdio.h>

int main(){
    int sum = 0x40302010;
    unsigned char* p = (unsigned char*)&sum;
    printf("Sum is %x\n", sum);
    for (int i = 0; i < 4; i++){
        printf("%p\t%x\n", p+i, p[i]);
    }
}