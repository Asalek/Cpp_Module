#include "zombie.hpp"

int main()
{
	{
		randomChump("ok");
	}
	{
		zombie *zom;

		zom = newZombie("asalek");
		zom->announce();
		delete(zom);
	}
	return (0);
}