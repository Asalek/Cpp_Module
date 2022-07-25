#include "Animal.h"
#include "Dog.h"
#include "Cat.h"

int main()
{
	const Animal* j = new Dog();
	const Animal* i = new Cat();

	delete j;
	delete i;

	cout<<endl<< "/*******My Own Test********\\" <<endl<<endl;

	Animal *animal[4];

	animal[0] = new Cat();
	animal[1] = new Cat();
	animal[2] = new Dog();
	animal[3] = new Dog();
	for (size_t i = 0; i < 4; i++)
	{
		delete animal[i];
	}
	return 0;	
}
