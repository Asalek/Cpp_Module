#include "Dog.h"

Dog::Dog()
{
	cout << "Dog Default Constructor Called" << endl;
	this->type = "Dog";
	this->brain = new Brain();
}

Dog::~Dog()
{
	delete this->brain;
	cout << "Dog Destructor Called" << endl;
}

void	Dog::makeSound()const
{
	cout << "Awooof Awooof" << endl;
}
