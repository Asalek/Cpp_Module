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
