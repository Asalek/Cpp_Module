#ifndef CLASS
#define CLASS

#include <iostream>

using std::cout;
using std::endl;
using std::string;

class Animal
{
	protected:
		string	type;
	public:
		Animal();
		Animal(const Animal &animal);
		Animal &operator=(const Animal &animal);
		~Animal();
};

#endif