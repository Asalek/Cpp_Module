#include "Bureaucrat.h"
#include "Form.h"

string	Bureaucrat::getName()const{return this->name;}
int		Bureaucrat::getGrade()const{return this->grade;}

Bureaucrat::Bureaucrat():name("NO_name")
{
	this->grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &buro)
{
	*this = buro;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &buro)
{
	if (this == &buro)
		return *this;
	this->grade = buro.grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
}

void	Bureaucrat::increment()
{
	if (this->grade > 1 && grade < 150)
	{
		this->grade--;
	}
	else
		throw Bureaucrat::GradeTooHighException();	
}

void	Bureaucrat::decrement()
{
	if (this->grade < 150 && grade > 1)
	{
		grade++;
	}
	else
		throw Bureaucrat::GradeTooLowException();
}

ostream &operator<<(ostream &out, const Bureaucrat &B)
{
	out << B.getName() << ", bureauacrat grade " << B.getGrade()<< "."<< endl;
	return out;
}

Bureaucrat::Bureaucrat(string n, int grad):name(n), grade(grad)
{
	if (grad > 150)
		throw Bureaucrat::GradeTooLowException();
	if (grad < 1)
		throw Bureaucrat::GradeTooHighException();
}

void	Bureaucrat::executeForm(const Form &form)
{
	if (this->getGrade() > form.getExec())
	{
		cout << "Couldn't execute it"<<endl;
		throw Form::GradeTooLowException();
	}
	if (this->getGrade() <= 0)
	{
		cout << "Couldn't execute it"<<endl;
		throw Form::GradeTooHighException();
	}
	if (form.getSign() != true)
	{
		cout << "Couldn't execute it"<<endl;
		cout << "NOT SIGNED !!!!!!" << endl;
		return ;
	}
	cout << this->name << " Executed " << form.getName() << endl;
	form.execute(*this);
}

/*
class A
{
  static const int a; //declaration
};

const int A::a = 10; //defining the static member outside the class

class A
{
  const int b;
  A(int c) : b(c) {} //const member initialized in initialization list
};
*/
