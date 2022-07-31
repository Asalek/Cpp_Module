#include "WrongCat.h"

WrongCat::WrongCat()
{
	cout << "WrongCat Default Constructor Called" << endl;
	this->type = "WrongCat";
}

WrongCat::~WrongCat()
{
	cout << "WrongCat Destructor Called" << endl;
}

void	WrongCat::makeSound()const
{
	cout << "MeooooooooW" << endl;
}

WrongCat::WrongCat(const WrongCat &WrongCat)
{
	cout << "WrongCat copy constructor Called" << endl;
	*this = WrongCat;
}

WrongCat	&WrongCat::operator=(const WrongCat &WrongCat)
{
	cout << "WrongCat copy assignment operator Called" << endl;
	if (this == &WrongCat)
		return (*this);
	this->type = WrongCat.getType();
	return (*this);
}