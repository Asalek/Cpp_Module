#include "ScavTrap.hpp"

ScavTrap::ScavTrap():ClappTrapp()
{
	setName("no name");
	setHP(100);
	setEP(50);
	setAD(20);
	cout << "ScavTrapp Default Constructor Called" << endl;
}

ScavTrap::ScavTrap(string name):ClappTrapp(name)
{
	setHP(100);
	setEP(50);
	setAD(20);
	cout << "ScavTrapp Constructor Called" << endl;
}

ScavTrap::~ScavTrap()
{
	cout<< "ScavTrap Destructor Called"<< endl;
}

void	ScavTrap::GuardGate()
{
	cout << "ScavTrap in Gate Keeper Mode" << endl;
}