#ifndef ITER_H
#define ITER_H

#include <iostream>

template <typename T>
void	iter(T array[], int len, void (*func)(T &charT))
{
	int	i;

	i = 0;
	while (i < len)
	{
		func(array[i]);
		i++;
	}
}

template <typename T>
void	changeArray(T &array)
{
	array = 'x';
}

#endif