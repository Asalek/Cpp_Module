#ifndef DOG_H
#define DOG_H

#include "Animal.h"
#include "Brain.h"

class Dog: public Animal
{
	private:
		Brain *brain;
	public:
		Dog();
		~Dog();
		void	makeSound()const;
};

#endif