#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	cout<<"DiamondTrap Default constructor called"<<endl;
	string n = "no_name";

	this->name = ScavTrap::getName();
	this->setName(n.append("_clap_name"));
	this->setEP(ScavTrap::getEP());
	this->setHP(FragTrap::getHP());
	this->setAD(FragTrap::getAD());
}

DiamondTrap::DiamondTrap(string name)
{
	cout<<"DiamondTrap constructor called"<<endl;
	this->name = ScavTrap::getName();
	this->ScavTrap::setName(name.append("_clap_name"));
	this->ScavTrap::setEP(ScavTrap::getEP());
	this->FragTrap::setHP(FragTrap::getHP());
	this->FragTrap::setAD(FragTrap::getAD());
}

DiamondTrap::~DiamondTrap()
{
	cout<<"DiamondTrap Destructor Called"<<endl;
}

void	DiamondTrap::attack(const string &target)
{
		ScavTrap::attack(target);
}