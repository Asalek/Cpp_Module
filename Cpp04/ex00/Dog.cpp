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

void	Dog::MakeSound()const
{
	cout << "Awooof Awooof" << endl;
}
