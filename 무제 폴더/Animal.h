#include <iostream>
#include <cstring>
using namespace std;

class Animal {
	protected:
		char name[10];
		int age;
        double weight;
	public:
		Animal(int _age, char * _name, double _weight) : age(_age), weight(_weight){
			strcpy(name, _name);
		}
		string getName();
		int getAge();
        double getWeight();
        virtual void bark() = 0;
};