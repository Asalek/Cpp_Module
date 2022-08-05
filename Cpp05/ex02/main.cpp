#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "Form.h"

int main()
{
	Bureaucrat b("Ayoub", 2);
	Bureaucrat c("hamza", 150);
	Bureaucrat d;
	ShruForm	a("asalek");
	try
	{
		b.increment();
		cout << b << endl;
		a.beSigned(b);
		// a.execute(b);
		a.execute(c);
	}
	catch(std::exception& e)
	{
		cout << "Bureaucrat " << e.what() << '\n';
	}
	return 0;
}