#ifndef CLASSS
# define CLASSS

#include "ClappTrap.hpp"

class FragTrap: public virtual ClappTrapp
{
	public:
		FragTrap();
		FragTrap(string name);
		~FragTrap();
		void	highFivesGuys(void);
		void	attack(const string &target);
};

#endif