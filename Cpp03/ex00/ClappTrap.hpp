#ifndef CLASS_CLAPP_TRAPP
#define CLASS_CLAPP_TRAPP

#include <iostream>

using std::string;
using std::cout;
using std::endl;

class ClappTrapp
{
	private:
		string	name;
		int		HitPoint = 10;	//Player Health
		int		energyPoint = 10;
		int		attackDamage = 0;
	public:
		void	attack(const string &target);
		void	takeDamage(unsigned int	amount);
		void	beRepaired(unsigned int amount);
		ClappTrapp(string Name);
		ClappTrapp();
		~ClappTrapp();
		ClappTrapp(const ClappTrapp &clapp);
		ClappTrapp &operator=(const ClappTrapp &Clapp);
};

#endif