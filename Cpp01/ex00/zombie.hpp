#ifndef CLASS_H
# define CLASS_H

#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::cin;

//---------------Zombie Class

class zombie
{
	string	name;
	public:
		void	announce(void);
		zombie(){};
		zombie(string n)
		{
			name = n;
		}
		void	setName(string aname)
		{name = aname;}
		~zombie(void)
		{
			cout<<name<<"killed by Ada Wong"<<endl;
		}
};
//-----------------Zombie Functions

	zombie *newZombie(string name);
	void randomChump(string name);

#endif