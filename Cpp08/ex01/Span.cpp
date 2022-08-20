#include "Span.hpp"

Span::Span()
{
	this->n = 0;
}

Span::Span(const Span &span)
{
	*this = span;
}

Span &Span::operator=(const Span &span)
{
	if (this == &span)
		return *this;
	this->vec.clear();
	this->n = span.n;
	vec.assign(span.vec.begin(), span.vec.end());
	// for (unsigned int i = 0; i < span.vec.size(); i++)
	// 	this->vec.push_back(span.vec[i]);
	return *this;
}

Span::~Span()
{
	this->vec.clear();
}

Span::Span(unsigned int n)
{
	this->n = n;
}

void	Span::addNumber(int number)
{
	if (this->vec.size() >= this->n)
		throw myException();
	vec.push_back(number);
	// throw(std::length_error("not there"));
}

int	Span::longestSpan()
{
	int	max;
	int	min;

	if (vec.size() < 2)
		throw(std::length_error("\033[36mContainer size less than 1\n"));
	max = abs(*std::max_element(vec.begin(), vec.end()));
	min = abs(*std::min_element(vec.begin(), vec.end()));
	return (max - min);
}

int	Span::shortestSpan()
{
	int shortest;
	int test;
	vector<int> tmp;

	if (vec.size() < 2)
		throw(std::length_error("\033[36mContainer size less than 1\n"));
	copy(vec.begin(), vec.end(), back_inserter(tmp));
	sort(tmp.begin(), tmp.end());
	shortest = tmp.at(1) - tmp.at(0);
	for (unsigned int i = 1; i < tmp.size(); i++)
	{
		test = tmp.at(i) - tmp.at(i - 1);
		if (test < shortest)
			shortest = test;
	}
	tmp.clear();
	return shortest;
}

void Span::addMoaaarNumbers(unsigned int s)
{
	vector<int> nee(s, 1);
	// nee.resize(this->n);
	srand(time(0));
	generate(nee.begin(), nee.end(), rand);

	vec.insert(vec.end(), nee.begin(), nee.end());
	nee.clear();
	// for (unsigned int i = 0; i < vec.size(); i++)
	// {
	// 	cout << vec[i] << endl;
	// }
}