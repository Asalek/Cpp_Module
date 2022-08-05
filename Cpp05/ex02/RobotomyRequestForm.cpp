#include "RobotomyRequestForm.h"

//		constructors 		:::

RobotomyRequestForm::RobotomyRequestForm():Form("no_name", 72, 45)
{
	this->target = "no_Name";
}

RobotomyRequestForm::RobotomyRequestForm(const RobotomyRequestForm &robot)
{
	*this = robot;
}

RobotomyRequestForm &RobotomyRequestForm::operator=(const RobotomyRequestForm &r)
{
	if (this == &r)
		return *this;
	this->target = r.target;
	return *this;
}

RobotomyRequestForm::RobotomyRequestForm(string target):Form("no_name", 72, 45)
{
	this->target = target;
}

//		Destructor     		:::

RobotomyRequestForm::~RobotomyRequestForm(){}

//		Methods				:::

void	RobotomyRequestForm::execute(const Bureaucrat &buro) const
{
	int	i;

	if (buro.getGrade() > 45)
		throw GradeTooLowException();
	else if (this->getSign() == false)
	{
		cout << "Bureaucrat Not signed !!!" <<endl;
		return ;
	}
	else
	{
		srand(time(0));
		cout << "🛠 Tzzzzzzzzz Vnnnnnnnn Zennnnnnn" << endl;
		i = (rand() % 2) + 1;
		if (i < 2)
			cout << this->target << " ✅ has been robotmized successfully " << i << endl;
		else
			cout << this->target << " ❌ failed @$%^@%&$%&@$%&@%& " << i << endl;
	}
}
