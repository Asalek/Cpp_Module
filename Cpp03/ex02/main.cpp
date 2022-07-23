#include "ClappTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

int main()
{
	ClappTrapp	asalek("asalek");
	ClappTrapp	AyoubSalek(asalek);
	ScavTrap	scav;
	ClappTrapp	*c = &scav;  //anything ClappTrapp can do ScavTrap can do too
	FragTrap	frag("Windows");

	asalek.attack("Hamza Adaoud");
	asalek.beRepaired(6);
	asalek.takeDamage(120);
	c->setName("**");
	scav.attack("ZooOooZ");
	scav.GuardGate();
	frag.attack("asalek");
	frag.highFivesGuys();
}