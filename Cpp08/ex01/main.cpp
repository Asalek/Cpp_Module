#include "Span.hpp"

int main()
{
	Span sp = Span(5);
	sp.addNumber(6);
	sp.addNumber(3);
	sp.addNumber(17);
	sp.addNumber(9);
	sp.addNumber(11);
	std::cout << sp.shortestSpan() << std::endl;
	std::cout << sp.longestSpan() << std::endl;

	// HARD TEST :: Wear a protection mask i warned you your device may explod

	sp.addMoaaarNumbers(1250000);
	try
	{
		sp.addNumber(1);
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what();
	}
	return 0;
}
