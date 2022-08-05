#ifndef PRESIDENTIALPARDONFORM_H
#define PRESIDENTIALPARDONFORM_H

#include "Form.h"

class PresidentialPardonForm: public Form
{
	string target;
	public:
		PresidentialPardonForm();
		PresidentialPardonForm(const PresidentialPardonForm &t);
		PresidentialPardonForm operator=(const PresidentialPardonForm &t);
		~PresidentialPardonForm();
		PresidentialPardonForm(string targ);
		void	execute(const Bureaucrat &buro) const;
};

#endif