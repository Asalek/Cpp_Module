#include "ClappTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
	ClappTrapp	asalek("asalek");
	ClappTrapp	AyoubSalek(asalek);
	ScavTrap	scav;
	ClappTrapp	*c = &scav;
	FragTrap	frag("Windows");

	asalek.attack("Hamza Adaoud");
	asalek.beRepaired(6);
	asalek.takeDamage(120);
	c->setName("**");
	scav.attack("ZooOooZ");
	scav.GuardGate();
	frag.attack("asalek");
	frag.highFivesGuys();
	DiamondTrap dia("aaa");
	dia.attack("bbbbB");
	dia.whoAmI();
}