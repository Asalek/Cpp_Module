#ifndef WrongCat_H
#define WrongCat_H

#include "WrongAnimal.h"

class WrongCat: public WrongAnimal
{
	public:
		WrongCat();
		~WrongCat();
		void	makeSound()const;
		WrongCat(const WrongCat &WrongCat);
		WrongCat &operator=(const WrongCat &WrongCat);
};

#endif