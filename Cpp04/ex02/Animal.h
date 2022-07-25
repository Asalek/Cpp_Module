#ifndef CLASS
#define CLASS

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Animal   //abstract class have at least one pure VF
{
	protected:
		string	type;
	public:
		Animal();
		Animal(const Animal &animal);
		Animal &operator=(const Animal &animal);
		virtual ~Animal();
		string	getType()const;
		virtual void	makeSound()const = 0; /*pure Virtual Function //any class that inheret fromm 
												 animal will have to provide it's own implimentation 
												// makeSound=0 force every derived class to implement her own makeSound();*/
};

#endif