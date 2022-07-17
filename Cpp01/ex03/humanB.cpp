#include "humanB.hpp"

void	HumanB::attack(void)
{
	cout << name <<" attack with their " << wepone->getType() << endl;
}

void	HumanB::setWeapon(Weapon &club)
{
	this->wepone = &club;
}

HumanB::HumanB(string name)
{
	this->name = name;
}