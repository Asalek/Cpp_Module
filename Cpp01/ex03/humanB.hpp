#ifndef CLASSB_H
# define CLASSB_H

#include "weapon.hpp"

class HumanB
{
private:
	string	name;
	Weapon	*wepone;
public:
	HumanB(string name);
	~HumanB(){};
	void	attack(void);
	void	setWeapon(Weapon &wep);
};

#endif
