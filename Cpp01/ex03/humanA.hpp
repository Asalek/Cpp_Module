#ifndef CLASSA_H
#define CLASSA_H

#include "weapon.hpp"


class HumanA
{
	string name;
	Weapon &weapon;
	public:
		~HumanA(){};
		void	attack(void);
		HumanA (string name, Weapon &club);
};

#endif
