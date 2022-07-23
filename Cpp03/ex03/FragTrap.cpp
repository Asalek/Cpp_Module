#include "FragTrap.hpp"

FragTrap::~FragTrap()
{
	cout << "Fragtrap Destructor Called"<<endl;
}

FragTrap::FragTrap():ClappTrapp()
{
	setName("no name");
	setHP(100);
	setEP(100);
	setAD(30);
	cout << "FragTrap Default Constructor Called" << endl;
}

FragTrap::FragTrap(string name):ClappTrapp(name)
{
	setHP(100);
	setEP(100);
	setAD(30);
	cout << "FragTrap Constructor Called" << endl;
}

void	FragTrap::highFivesGuys()
{
	cout << "Give me your hand HIGH FIIIIVE"<<endl;
}

void	FragTrap::attack(const string &target)
{
	if (getEP() > 0 && getHP() > 0)
	{
		setEP(getEP() - 1);
		cout <<"FragTrap "<< getName() << " attacks " << target << \
		", causing " << getAD() <<" points of damage!" << endl;
	}
	else
		cout << "No Point Left" << endl;
}
