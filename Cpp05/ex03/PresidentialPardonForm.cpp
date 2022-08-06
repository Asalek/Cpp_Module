#include "PresidentialPardonForm.h"

///		constructors	:::

PresidentialPardonForm::PresidentialPardonForm():Form("No_Name", 25, 5)
{
	this->target = "No_target";
}

PresidentialPardonForm::PresidentialPardonForm(const PresidentialPardonForm &t)
{
	*this = t;
}

PresidentialPardonForm PresidentialPardonForm::operator=(const PresidentialPardonForm &t)
{
	if (this == &t)
		return *this;
	this->target = t.target;
	return *this;
}

PresidentialPardonForm::PresidentialPardonForm(string targ):Form(targ, 25, 5)
{
	this->target = targ;
}

///		Destructors		:::

PresidentialPardonForm::~PresidentialPardonForm(){}

///		Methods			:::

void	PresidentialPardonForm::execute(const Bureaucrat &buro) const
{
	if (buro.getGrade() > 25)
		throw GradeTooLowException();
	if (this->getSign() == false)
	{
		cout << "Bureaucrat Not Signed in President Form" << endl;
		return ;
	}
	cout << this->target << " has been pardoned by Zaphod Beeblebrox." << endl;
}