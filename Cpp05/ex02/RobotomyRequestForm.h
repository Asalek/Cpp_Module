#ifndef ROBOTOMY_H
#define ROBOTOMY_H

#include "Form.h"
#include <cstdlib>

class RobotomyRequestForm: public Form
{
	string target;
	public:
		RobotomyRequestForm();
		RobotomyRequestForm(const RobotomyRequestForm &rRF);
		RobotomyRequestForm &operator=(const RobotomyRequestForm &rfr);
		~RobotomyRequestForm();
		RobotomyRequestForm(string targ);
		void	execute(Bureaucrat const &executer) const;
};

#endif