#include "humanA.hpp"

void	HumanA::attack(void)
{
	cout << name <<" attack with their " << weapon.getType() << endl;
}

HumanA::HumanA(string name, Weapon &club)
	:weapon(club)
{
	this->name = name;
}
