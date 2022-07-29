#include "Dog.h"

Dog::Dog()
{
	cout << "Dog Default Constructor Called" << endl;
	this->type = "Dog";
}

Dog::~Dog()
{
	cout << "Dog Destructor Called" << endl;
}

void	Dog::makeSound()const
{
	cout << "Awooof Awooof" << endl;
}

Dog::Dog(const Dog &dog)
{
	cout << "Dog copy constructor Called" << endl;
	*this = dog;
}

Dog	&Dog::operator=(const Dog &dog)
{
	cout << "Dog copy assignment operator Called" << endl;
	if (this == &dog)
		return (*this);
	this->type = dog.getType();
	return (*this);
}