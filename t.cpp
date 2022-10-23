#include <iostream>
#define MAX 10
#define INPUT "점수를 입력하세요: "
#define OUTPUT "입력받은 값: "
#define AVG "평균: "
using namespace std;

void input(int score[], int *size);
void calculate(int score[], int size, double *avg);
void print(int score[], int size, double avg);

int main(){
    int score[MAX], size;
    double avg;
    input(score, &size);
    calculate(score, size, &avg);
    print(score, size, avg);
}

void input(int score[], int *size){
    cout << INPUT;
    *size = 0;
    while (true){
        cin >> score[*size];
        if (score[*size] == -1){
            score[*size] = 0;
            break;
        }
        *size += 1;
    }
}

void calculate(int score[], int size, double *avg){
    for (int i = 0; i < size; i++){
        *avg += score[i];
    }
    *avg /= size;
}

void print(int score[], int size, double avg){
    cout << OUTPUT;
    for (int i = 0; i < size; i++){
        cout << score[i] << " ";
    }
    cout << endl << AVG << avg;
}