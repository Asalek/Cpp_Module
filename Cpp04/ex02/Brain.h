#ifndef CLASS_BRAIN
#define CLASS_BRAIN
#include "Animal.h"

class Brain
{
	public:
		string ideas[100];
		Brain();
		~Brain();
		Brain(const Brain &br);
		Brain &operator=(const Brain &br);
};

#endif