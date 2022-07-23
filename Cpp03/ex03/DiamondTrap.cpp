#include "DiamondTrap.hpp"

DiamondTrap::DiamondTrap()
{
	cout<<"DiamondTrap Default constructor called"<<endl;

	this->name = this->getName();
	this->setName(name.append("_clap_name"));
	this->setEP(ScavTrap::getEP());
	this->setHP(FragTrap::getHP());
	this->setAD(FragTrap::getAD());
}

DiamondTrap::DiamondTrap(string name)
{
	cout<<"DiamondTrap constructor called"<<endl;
	this->name = name;
	this->setName(name.append("_clap_name"));
	this->setEP(ScavTrap::getEP());
	this->setHP(FragTrap::getHP());
	this->setAD(FragTrap::getAD());
}

DiamondTrap::~DiamondTrap()
{
	cout<<"DiamondTrap Destructor Called"<<endl;
}

void	DiamondTrap::attack(const string &target)
{
		ScavTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	cout<<"Diamond Name is : "<<this->name << " ClappTrap name is : "<<this->getName()<<endl;
}