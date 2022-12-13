#include <iostream>
#include <fstream>
#include <string>
#include "cat.h"

int main() {
    Cat *t1 = new Cat(1, "안녕", 4.2);
    Dog *t2 = new Dog(2, "테스트", 4.6);

    t1->bark();
    t2->bark();
    t2->tailWhip();
}