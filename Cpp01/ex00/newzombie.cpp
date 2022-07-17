#include "zombie.hpp"

zombie* newZombie(string name)
{
	zombie *zom = new zombie(name);

	return (zom);
}