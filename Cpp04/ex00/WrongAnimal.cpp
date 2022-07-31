#include "WrongAnimal.h"

string	WrongAnimal::getType()const
{return (this->type);}

WrongAnimal::WrongAnimal()
{
	type = "EGG";
	cout << "WrongAnimal Constructor Called" << endl;
}

WrongAnimal &WrongAnimal::operator=(const WrongAnimal &WrongAnimal)
{
	cout << "WrongAnimal Copy Assignment Operator Called" << endl;
	if (this == &WrongAnimal)
		return (*this);
	type = WrongAnimal.type;
	return *this;
}

WrongAnimal::WrongAnimal(const WrongAnimal &WrongAnimal)
{
	cout << "WrongAnimal Copy Constructor Called" << endl;
	*this = WrongAnimal;
}

WrongAnimal::~WrongAnimal()
{
	cout << "WrongAnimal Destructor Called" << endl;
}

void	WrongAnimal::makeSound()const
{
	cout << "Cracked" <<endl;
}