#include "Bureaucrat.h"
#include "Form.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"

int main()
{
	Bureaucrat b("Ayoub", 2);
	Bureaucrat c("hamza", 150);

	ShruForm	shru("asalek");
	RobotomyRequestForm Robot("Robot");
	
	try
	{
		b.increment();
		cout << b << endl;
		shru.beSigned(b);
		// a.execute(b);
		// shru.execute(c);
		Robot.beSigned(b);
		Robot.execute(b);
		// Robot.execute(c);
	}
	catch(std::exception& e)
	{
		cout << "Bureaucrat " << e.what() << '\n';
	}
	return 0;
}