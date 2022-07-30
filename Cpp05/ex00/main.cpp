#include "Bureaucrat.h"

int main()
{
	Bureaucrat b("", 2);
	Bureaucrat c("", 150);
	Bureaucrat d;

	try
	{
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