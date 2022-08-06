#ifndef CLASS_A
#define CLASS_A

#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::ostream;

class Form;			//forward declaration

class Bureaucrat
{
	private:
		const std::string name;
		int		grade;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &bur);
		Bureaucrat &operator=(const Bureaucrat &bur);
		~Bureaucrat();
		Bureaucrat(string name, int grade);
		string	getName()const;
		int		getGrade()const;
		void	increment();
		void	decrement();
		class	GradeTooHighException: public std::exception
		{
			public:
				const char	*what() const throw()  //this function is not expected to throw any exceptions. If it does, unexpected will be called
				{
					return "Grade Is Too High /** exception **\\";
				}
		};
		class	GradeTooLowException: public std::exception
		{
			public:
				const char	*what() const throw()
				{
					return "Grade Is Too Low";
				}
		};
		void	executeForm(Form const &form);
};

ostream & operator << (ostream &out,const Bureaucrat &bur);


#endif
