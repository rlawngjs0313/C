#include "Animal.h"

class Dog: public Animal{
    public:
        Dog(int _age, char *_name, double _weight) : Animal(_age, _name, _weight){strcpy(name, _name);}
        virtual void tailWhip();
};