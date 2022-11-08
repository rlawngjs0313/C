#include <stdio.h>

int main(){
    char data[100];
    int j = 0;
    for (char i = getchar(); i != '\n'; i = getchar()){
        data[j] = i;
        j++;
    }
    for (int i = 0; i < j; i++){
        printf("%c", data[i]);
    }
}