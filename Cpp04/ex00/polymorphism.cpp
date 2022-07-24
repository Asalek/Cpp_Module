#include "polymorphism.h"

Animal::Animal()
{
	type = "EGG";
	cout << "Animal Constructor Called" << endl;
}

Animal &Animal::operator=(const Animal &animal)
{
	cout << "Animal Copy Assignment Operator Called" << endl;
	if (this == &animal)
		return (*this);
	type = animal.type;	
}

Animal::Animal(const Animal &animal)
{
	cout << "Animal Copy Constructor Called" << endl;
	*this = animal;
}

Animal::~Animal()
{
	cout << "Animal Destructor Called" << endl;
}