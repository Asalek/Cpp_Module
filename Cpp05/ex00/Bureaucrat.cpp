#include "Bureaucrat.h"

string	Bureaucrat::getName()const{return this->name;}
int		Bureaucrat::getGrade()const{return this->grade;}

Bureaucrat::Bureaucrat():name("NO_name")
{
	cout<<"Default Constructor Called"<<endl;
	this->grade = 150;
}

Bureaucrat::Bureaucrat(const Bureaucrat &buro)
{
	cout<<"Copy constructor Called"<<endl;
	*this = buro;
}

Bureaucrat	&Bureaucrat::operator=(const Bureaucrat &buro)
{
	cout<<"Copy Assignment Operator Called"<<endl;
	if (this == &buro)
		return *this;
	this->grade = buro.grade;
	return *this;
}

Bureaucrat::~Bureaucrat()
{
	cout << "Destructor Called"<<endl;
}

void	Bureaucrat::increment()
{
	if (this->grade > 1 && grade < 150)
	{
		this->grade--;
	}
	else
		throw "grade out of range";	
}

void	Bureaucrat::decrement()
{
	if (this->grade < 150 && grade > 1)
	{
		grade++;
	}
	else
		throw "grade out of range";
}

ostream &operator<<(ostream &out, const Bureaucrat &B)
{
	out << B.getName() << ", bureuacrat grade " << B.getGrade()<< "."<< endl;
	return out;
}

Bureaucrat::Bureaucrat(string n, int grad):name(n), grade(grad)
{
	cout << "Set name, grade Constructor Called"<<endl;
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
