#ifndef ARRAY
#define ARRAY

#include <iostream>
using std::string;
using std::cout;
using std::endl;

template <typename T>
class Array
{
	T *array;
	unsigned int size;
	public:
	// Default Constructor ::
		Array()
		{
			size = 0;
			array = nullptr;
		}
	//Constructor with Parametre ::
		Array(unsigned int n)
		{
			this->size = n;
			if (n < 1)
			{
				array = nullptr;
				return ;
			}
			array = new T[n];
			while (n--)
				array[n] = nullptr;
			// 	array[n] = nullptr;		nullptr but string not a pointer this will work fine with string*
		}
	//Copy constructor ::
		Array(const Array &a)
		{
			*this = a;
		}
	//Copy assignment operator ::
		Array &operator=(const Array &ar)
		{
			if (this == &ar)
				return *this;
			if (ar.size > 0)
			{
				delete [] this->array;
				array = new T[ar.size];
				this->size = 0;
				while (this->size < ar.size)
				{
					this->array[this->size] = ar.array[this->size];
					this->size++;
				}
			}
			return *this;
		}
	//Getters ::
	T *getArray(){return array;}
	//Exceptions Derrived Class ::
		class myexception : public std::exception
		{
			const char *what() const throw()
			{
				return "ERROR";
			}
		};
};

#endif