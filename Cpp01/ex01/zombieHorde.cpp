#include "zombie.h"

zombie	*zombieHorde(int n, string name)
{
	// zombie *zom[n];
	// int	i;

	// i = 0;
	// while (i < n)
	// {
	// 	zom[i] = new zombie(name);
	// 	cout<< i+1 <<" _ ";
	// 	zom[i]->announce();
	// 	i++;
	// }
	// return *(zom);
	zombie *zom = new zombie[n];

	for (int i = 0; i < n; i++)
	{
		zom[i].setName(name);
		cout<< i+1 <<" _ ";
		zom[i].announce();
	}
	return (zom);
}