#ifndef CLASS_H
# define CLASS_H

#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::cin;

class Weapon
{
	string type;
	public:
		void	setType(string type);
		Weapon(){};
		const string getType();
		Weapon(string type);
};

#endif
