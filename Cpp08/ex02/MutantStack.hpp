//Standard Template Library

#ifndef MUTANT_H
#define MUTANT_H

template <typename T>
class MutantStack
{
	public:
		MutantStack();
		MutantStack(const MutantStack &stack);
		MutantStack &operator=(const MutantStack &stack);
		~MutantStack();
};

#endif