#include "dog.h"

class Cat: public Animal{
    public:
        Cat(int _age, char *_name, double _weight) : Animal(_age, _name, _weight){}
        virtual void Knuckle(char *Bname);
};