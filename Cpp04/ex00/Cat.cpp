#include "Cat.h"

Cat::Cat()
{
	cout << "Cat Default Constructor Called" << endl;
	this->type = "Cat";
}

Cat::~Cat()
{
	cout << "Cat Destructor Called" << endl;
}

void	Cat::makeSound()const
{
	cout << "MeooooooooW" << endl;
}

Cat::Cat(const Cat &cat)
{
	cout << "Cat copy constructor Called" << endl;
	*this = cat;
}

Cat	&Cat::operator=(const Cat &cat)
{
	cout << "Cat copy assignment operator Called" << endl;
	if (this == &cat)
		return (*this);
	this->type = cat.getType();
	return (*this);
}