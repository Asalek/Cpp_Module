#ifndef CLASS_H
# define CLASS_H

#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::cin;

class Harl
{
	public:
		void	DEBUG(void);
		void	INFO(void);
		void	WARNING(void);
		void	ERROR(void);
		void	complain(string level);
};

#endif