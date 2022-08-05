#include "Form.h"

/* Getters */

string	Form::getName () const {return this->name;}
int		Form::getExec  () const{return this->exec;}
int		Form::getGrade ()const{return this->grade;}
bool	Form::getSign  () const{return this->sign;}

/* Constructors Destructor */

Form::Form():name("NO_name"), grade(2), exec(2)
{
	this->sign = false;
}

Form::~Form()
{
}

Form::Form(string name, int grade, int exec):name(name), grade(grade), exec(exec)
{
	this->sign = false;
}

Form::Form(const Form & form):name(form.name), grade(form.grade), exec(form.exec)
{
	*this = form;
}

Form	&Form::operator=(const Form &f)
{
	if (this == &f)
		return *this;
	this->sign = f.sign;
	return *this;
}

/* print data operator << */

ostream &operator<<(ostream &out, const Form &form)
{
	out << form.getName() << " His grade is : " << form.getGrade();
	out << ", the grade he need to execute is : " << form.getExec();
	out << (form.getSign() ? ", YaaY He can sign" : ", Oops He can't sign") << endl;
	return out;
}

/* other Functions */

void	Form::beSigned(Bureaucrat &buro)
{
	if (buro.getGrade() < 20)
		this->sign = true;
	else
		throw Form::GradeTooLowException();
}

void	Form::signForm(Bureaucrat &buro)
{
	if (this->sign == true && buro.getGrade() < 20)
		cout << buro.getName() << " Signed " << this->getName() << endl;
	else
		cout << buro.getName() << " couldn't sign " << this->getName() << \
			" because his grade is too low or beeing denied from signing" << endl;
}
