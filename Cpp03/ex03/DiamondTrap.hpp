#ifndef CLASSAA
# define CLASSAA

#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "ClappTrap.hpp"

class DiamondTrap: public ScavTrap, FragTrap
{
	private:
		string name;
	public:
		DiamondTrap();
		DiamondTrap(string name);
		~DiamondTrap();
		void	attack(const string &target);
};

#endif