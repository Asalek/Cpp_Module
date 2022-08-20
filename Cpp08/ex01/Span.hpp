#ifndef SPAN_H
#define SPAN_H

#include <iterator>
#include <iostream>
#include <algorithm>
#include <vector>

using std::cout;
using std::endl;
using std::vector;
using std::copy;

class Span
{
	vector <int>	vec;
	unsigned int			n;
	public:
		Span();
		Span(const Span &sp);
		Span &operator=(const Span &span);
		~Span();
		Span(unsigned int n);
		void	addNumber(int number);
		void	addMoaaarNumbers(unsigned int s);
		int	shortestSpan();
		int	longestSpan();

		class myException: public std::exception
		{
			const char *what() const throw()
			{
				return ("\033[33mContainer Reached The N maximum Size\n");
			}
		};
};

#endif