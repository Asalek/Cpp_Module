#include "ClappTrap.hpp"

ClappTrapp::ClappTrapp()
{
	this->attackDamage = 0;
	this->energyPoint = 10;
	this->HitPoint = 10;
	this->name = "NoName";
	cout << "Default Constructor Called"<<endl;
}

ClappTrapp::ClappTrapp(string name)
{
	this->attackDamage = 0;
	this->energyPoint = 10;
	this->HitPoint = 10;
	this->name = name;
	cout << "Set Name Constructor have been called"<<endl;
}

ClappTrapp::~ClappTrapp()
{
	cout << "Destructor Called" <<endl;
}

ClappTrapp &ClappTrapp::operator=(const ClappTrapp &clapp)
{
	cout<<"Copy assignment operator Called"<<endl;
	if (this == &clapp)
		return (*this);
	name = clapp.name;
	attackDamage = clapp.attackDamage;
	energyPoint = clapp.energyPoint;
	HitPoint = clapp.HitPoint;
	return *this;
}

ClappTrapp::ClappTrapp(const ClappTrapp &clapp)
{
	cout << "copy constructor called " << endl;
	*this = clapp;
}

void	ClappTrapp::attack(const string &target)
{
	if (energyPoint > 0 && HitPoint > 0)
	{	
		energyPoint--;
		cout <<"ClapTrap "<< name << " attacks " << target << \
		", causing " << attackDamage <<" points of damage!" << endl;
	}
	else
		cout << "No Point Left" << endl;
}

void	ClappTrapp::takeDamage(unsigned int damage)
{
	cout <<"ClapTrap "<< name << "got " << damage <<" points of damage!" << endl;
	this->HitPoint -= damage;
	if (HitPoint <= 0)
		cout << name << "Died" << endl;	
}

void	ClappTrapp::beRepaired(unsigned int health)
{
	if (energyPoint > 0 && HitPoint > 0)
	{
		cout << "ClappTrapp "<<name<<" has restore "<<health<<" point of health"<<endl;
		energyPoint--;
		this->HitPoint += health;
	}
	else
		cout << "No Point Left" << endl;
}