#include "Bureaucrat.h"
#include "ShrubberyCreationForm.h"
#include "Form.h"

int main()
{
	Bureaucrat b("Ayoub", 2);
	Bureaucrat c("hamza", 150);
	Bureaucrat d;
	Form	a("zafir", 145, 137);
	try
	{
		cout << a << endl;
		cout << a << endl;
		a.signForm(c);
		a.signForm(b);
		b.increment();
		cout << b << endl;
	}
	catch(std::exception& e)
	{
		cout << "Bureaucrat " << e.what() << '\n';
	}
	ShruForm aa(a);
	return 0;
}