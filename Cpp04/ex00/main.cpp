#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main()
{
	const Animal* meta = new Animal();
	const Animal* j = new Dog();
	const Animal* i = new Cat();
	std::cout << j->getType() << " " << std::endl;
	std::cout << i->getType() << " " << std::endl;
	i->makeSound(); //will output the cat sound!
	j->makeSound();
	meta->makeSound();

	delete meta;
	delete j;
	delete i;

	cout<<endl<<"/********** My Test **********\\"<<endl<<endl;

	Cat cat_1;
	Animal *animal1 = &cat_1;
	cout << animal1->getType()<<endl;
	animal1->makeSound();
	
	Dog Dog_1;
	Animal *animal2 = &Dog_1;
	cout << animal2->getType()<<endl;
	animal2->makeSound();

	return 0;	
}