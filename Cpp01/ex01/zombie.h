#ifndef CLASS_H
# define CLASS_H

#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::cin;

//-----------zombie Class

class zombie
{
	string name;
	public:
		zombie(){}
		zombie(string n)
		{
			name = n;
		}
		void	announce(void);
		void	setName(string n)
		{
			name = n;
		}
		~zombie(void)
		{
			cout<<name<<" killed by Leon Scott Kennedy"<<endl;
		}
};

//-----------Zombie Functions

zombie	*zombieHorde(int n, string name);

#endif