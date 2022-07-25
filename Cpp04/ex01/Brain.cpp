#include "Brain.h"

Brain::Brain()
{
	cout << "Brain Default Constructor Called" << endl;
}

Brain::Brain(const Brain &br)
{
	cout << "Brain copy Constructor Called" << endl;
	*this = br;
}

Brain &Brain::operator=(const Brain &br)
{
	cout << "Brain copy assignmet operator Called" << endl;
	if (this == &br)
		return *this;
	for (size_t i = 0; i < 100; i++)
	{
		this->ideas[i] = br.ideas[i];
	}
	return *this;
}

Brain::~Brain()
{
	cout << "Brain Destructor called" << endl;
}