#include "Bureaucrat.h"
#include "Form.h"
#include "ShrubberyCreationForm.h"
#include "RobotomyRequestForm.h"
#include "PresidentialPardonForm.h"

int main()
{
	Bureaucrat b("Ayoub", 2);
	Bureaucrat c("hamza", 150);
	Bureaucrat test("TESTTT", 5);

	ShruForm	shru("asalek");
	RobotomyRequestForm Robot("Robot");
	PresidentialPardonForm Presi("Peri");
	
	try
	{
		b.increment();
		cout << b << endl;
		shru.beSigned(b);
		// a.execute(b);
		// shru.execute(c);
		Robot.beSigned(b);
		Robot.execute(b);
		Presi.beSigned(b);
		Presi.execute(b);
		// Robot.execute(c);
		test.executeForm(Presi);
	}
	catch(std::exception& e)
	{
		cout << "Bureaucrat " << e.what() << '\n';
	}
	return 0;
}