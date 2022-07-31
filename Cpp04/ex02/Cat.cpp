#include "Cat.h"

Cat::Cat()
{
	cout << "Cat Default Constructor Called" << endl;
	this->type = "Cat";
	this->brain = new Brain();
}

Cat::~Cat()
{
	delete this->brain;
	cout << "Cat Destructor Called" << endl;
}

void	Cat::makeSound()const
{
	cout << "MeooooooooW" << endl;
}

Cat::Cat(const Cat &cat)
{
	cout << "Cat copy constructor Called" << endl;
	this->brain = new Brain();
	*this = cat;
}

Cat	&Cat::operator=(const Cat &cat)
{
	cout << "Cat copy assignment operator Called" << endl;
	if (this == &cat)
		return (*this);
	this->type = cat.getType();
	for (size_t i = 0; i < 100; i++)
	{
		this->brain->ideas[i] = cat.brain->ideas[i];
	}
	return (*this);
}