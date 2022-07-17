#include "zombie.h"

int main()
{
	zombie *zom;
	
	zom = zombieHorde(13, "l3ami9in");
	delete [] zom;
	return (0);
}