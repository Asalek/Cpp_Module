#ifndef CLASSS
#define CLASSS

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class WrongAnimal
{
	protected:
		string	type;
	public:
		WrongAnimal();
		WrongAnimal(const WrongAnimal &WrongAnimal);
		WrongAnimal &operator=(const WrongAnimal &WrongAnimal);
		~WrongAnimal();
		string	getType()const;
		void	makeSound()const;
};

#endif