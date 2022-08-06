#include "Intern.h"
#include "Form.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

Intern::Intern(){}
Intern::Intern(const Intern &intern)
{
	*this = intern;
}
Intern	Intern::operator=(const Intern &internn)
{
	if (this == &internn)
		return *this;
	return *this;
}
Intern::~Intern(){}

Form	*Intern::makeForm(string formName, string formTarget)
{
	int formType[3];
	Form *formTypeForm[3];

	formTypeForm[0] = new ShruForm(formTarget);
	formTypeForm[1] = new RobotomyRequestForm(formTarget);
	formTypeForm[2] = new PresidentialPardonForm(formTarget);
	formType[0] = toLowerCase("ShrubberyCreationForm", formName);
	formType[1] = toLowerCase("RobotomyRequestForm", formName);
	formType[2] = toLowerCase("PresidentialPardonForm", formName);
	for (size_t i = 0; i < 3; i++)
	{
		while (formType[i] == 1)
		{
			cout << "Intern creates " << formType[i] << endl;
			return formTypeForm[i];
		}
		delete formTypeForm[i];
	}
	cout << "Form Type Doesn't exists & and a NULL pointer Returned" << endl;
	return NULL;
}

int	toLowerCase(string s1, string s2)
{
	size_t	j = 0;
	for (size_t i = 0; j < s2.size(); i++)
	{
		if (s2[j] == ' ')
			j++;
		if (tolower(s1[i]) != tolower(s2[j]))
				return 0;
		j++;
	}
	return 1;
}