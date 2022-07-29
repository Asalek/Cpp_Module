#ifndef CAT_H
#define CAT_H

#include "Animal.h"

class Cat: public Animal
{
	public:
		Cat();
		~Cat();
		void	makeSound()const;
		Cat(const Cat &cat);
		Cat &operator=(const Cat &cat);
};

#endif