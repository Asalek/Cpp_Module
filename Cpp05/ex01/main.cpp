#include "Bureaucrat.h"
#include "Form.h"

int main()
{
	Bureaucrat b("Ayoub", 2);
	Bureaucrat c("hamza", 150);
	Bureaucrat d;
	Form	a("zafir", 12, 12);
	try
	{
		cout << a << endl;
		cout << a << endl;
		a.signForm(b);
		a.signForm(c);
		b.increment();
		b.increment();
		cout << b << endl;
	}
	catch(std::exception& e)
	{
		cout << "Bureaucrat " << e.what() << '\n';
	}
	return 0;
}