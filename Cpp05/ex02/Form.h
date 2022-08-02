#ifndef FORM_H
#define FORM_H

#include <iostream>
#include "Bureaucrat.h"

class Form
{
	const string	name;
	bool			sign;
	const	int		grade;
	const	int		exec;
	public:
		Form();
		virtual ~Form();
		Form(const Form &form);
		Form	&operator=(const Form &form);
		Form(string name, int grade, int exec);
		string	getName() const;
		bool	getSign() const;
		int		getGrade() const;
		int		getExec() const;
		class GradeTooHighException: public std::exception
		{
			const char *what() const throw()
			{
				return "value too high to be set";
			}
		};
		class GradeTooLowException: public std::exception
		{
			const char *what() const throw()
			{
				return "value too low to be set";
			}
		};
		void 	beSigned(Bureaucrat &);
		void	signForm(Bureaucrat &);
}; 

ostream &operator<<(ostream &out, const Form &form);

#endif