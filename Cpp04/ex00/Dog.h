#ifndef DOG_H
#define DOG_H

#include "Animal.h"

class Dog: public Animal
{
	public:
		Dog();
		~Dog();
		void	makeSound()const;
		Dog(const Dog &dog);
		Dog &operator=(const Dog &dog);
};

#endif