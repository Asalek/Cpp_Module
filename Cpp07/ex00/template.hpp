#ifndef TEMPLATES_H
#define TEMPLATES_H

#include <iostream>


template<typename Type>
void	swap(Type &value1, Type &value2)
{
	Type tmp = value1;
	value1 = value2;
	value2 = tmp;
}

template<typename Type>
Type	min(Type value1, Type value2)
{
	return (value1 < value2) ? value1 : value2;
}

template<typename Type>
Type	max(Type value1, Type value2)
{
	return (value1 > value2) ? value1 : value2;
}

#endif