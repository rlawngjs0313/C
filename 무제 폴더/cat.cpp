#include "cat.h"

virtual void Cat::Knuckle(char *Bname){
    cout << name << "가 " << Bname << "에게 주먹질을 합니다.";
}

virtual void Cat::bark(){
    cout << name << "가 야옹하며 소리를 냅니다.";
}