#include "weapon.hpp"

void	Weapon::setType(string str)
{
	this->type = str;
}

const string	Weapon::getType(void)
{
	string	&ref = type;

	return (ref);
}

Weapon::Weapon(string type)
{
	this->type = type;
}
