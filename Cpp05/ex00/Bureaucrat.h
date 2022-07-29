#ifndef CLASS_A
#define CLASS_A

#include <iostream>

using std::string;
using std::cout;
using std::endl;
using std::ostream;

class Bureaucrat
{
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
};

ostream &operator<<(ostream out,const Bureaucrat &bur);

#endif
