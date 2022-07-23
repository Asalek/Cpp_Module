#include "ClappTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClappTrapp	asalek("asalek");
	ClappTrapp	AyoubSalek(asalek);
	ScavTrap	scav;
	ClappTrapp	*c = &scav;  //anything ClappTrapp can do ScavTrap can do too

	asalek.attack("Hamza Adaoud");
	asalek.beRepaired(6);
	asalek.takeDamage(15);
	c->setName("**");
	scav.attack("ZooOooZ");
	scav.GuardGate();
}