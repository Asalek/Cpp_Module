#include "Bureaucrat.h"

int main()
{
	Bureaucrat b("ayoub", 2);
	Bureaucrat c("Kasol", 150);
	Bureaucrat d;

	try
	{
		b.increment();
	}
	catch(std::exception& e)
	{
		// std::cerr << e.what() << '\n';
		
	}
	cout << b << endl;
	cout << d << endl;
	return 0;
}