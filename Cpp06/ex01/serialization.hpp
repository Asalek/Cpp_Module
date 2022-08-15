#ifndef SERIALIZATION_H
#define SERIALIZATION_H

#include <iostream>

using std::cout;
using std::endl;
using std::string;

typedef struct Data
{
	int	a;
}	Data_t;

uintptr_t serialize(Data_t* ptr);
Data_t* deserialize(uintptr_t raw);

/*
	reinterpret_cast used only when you wan't to cast 
	a pointer data-type to another pointer data-type.
*/

#endif