#include "Cat.h"

Cat::Cat()
{
	cout << "Cat Default Constructor Called" << endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	cout << "Cat Destructor Called" << endl;
	delete this->brain;
}

void	Cat::makeSound()const
{
	cout << "MeooooooooW" << endl;
}
