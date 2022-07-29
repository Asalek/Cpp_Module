#ifndef CAT_H
#define CAT_H

#include "Animal.h"
#include "Brain.h"

class Cat: public Animal
{
	private:
		Brain *brain;
	public:
		Cat();
		~Cat();
		void	makeSound()const;
		Cat(const Cat &cat);
		Cat &operator=(const Cat &cat);
};

#endif