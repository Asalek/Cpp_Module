//Standard Template Library

#ifndef MUTANT_H
#define MUTANT_H

#include <iostream>
#include <stack>
#include <deque>
#include <list>
#include <algorithm>

using std::list;

template <typename T, class container=std::deque<T> >
class MutantStack : public std::stack<T>
{
	public:
		MutantStack(){}
		~MutantStack(){}
		MutantStack(const MutantStack &stack)
		{
			*this = stack;
		}
		MutantStack &operator=(const MutantStack &stack)
		{
			if (this == &stack)
				return *this;
			return *this;
			*(this->c) = stack->c;    // will cope deeply even if you didn't reference it
		}
		typedef typename container::iterator iterator;
		iterator begin()
		{
			return this->c.begin();
		}
		iterator end()
		{
			return this->c.end();
		}
};

#endif