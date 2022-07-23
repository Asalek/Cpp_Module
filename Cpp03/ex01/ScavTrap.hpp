#ifndef CLASS_Scav
# define CLASS_Scav

#include "ClappTrap.hpp"

class ScavTrap:public ClappTrapp
{
	public:
		ScavTrap();
		ScavTrap(string name);
		~ScavTrap();
		void	GuardGate();
};

#endif