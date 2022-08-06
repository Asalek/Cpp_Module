#ifndef CLL_H
#define CLL_H

#include <iostream>
class Form;

class Intern
{
	public:
		Intern();
		Intern(const Intern &in);
		Intern operator=(const Intern &inte);
		~Intern();
		Form	*makeForm(std::string formName, std::string formTarget);
};

int	toLowerCase(std::string, std::string);

#endif