#include "ClappTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
	ClappTrapp	asalek("asalek");
	ClappTrapp	AyoubSalek(asalek);
	ScavTrap	scav;

	asalek.attack("Hamza Adaoud");
	asalek.beRepaired(6);
	asalek.takeDamage(15);
	scav.attack("ZooOooZ");
	scav.GuardGate();
}