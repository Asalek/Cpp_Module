#ifdef CLASS
#define CLASS

#include <iostream>
using std::string
using std::cout
using std::endl

class Bureaucrat
{
	private:
		string name;
		int		grade;
	public:
		Bureaucrat();
		Bureaucrat(const Bureaucrat &bur);
		Bureaucrat &operator=(const Bureaucrat &bur);
		~Bureaucrat();
		string getNam();
		string getGrade();
		void	increment();
		void	decrement();
};

ostream &operator<<(ostream out,const Bureaucrat &bur);

#endif