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
				array = nullptr;
			else
				array = new(std::nothrow) T[n];
			// 	array[n] = nullptr;		nullptr, but string not a pointer this will work fine with string*
		}
	//Copy constructor ::
		Array(const Array &a)
		{
			this->size = 0;
			*this = a;
		}
	//Destructor
		~Array()
		{
			if (size > 0)
				delete [] this->array;
		}
	//Copy assignment operator ::
		Array &operator=(const Array &ar)
		{
			if (this == &ar)
				return *this;
			if (this->size > 0)
				delete [] this->array;
			this->size = 0;
			this->array = new(std::nothrow) T[ar.size];
			while (this->size < ar.size)
			{
				this->array[this->size] = ar.array[this->size];
				this->size++;
			}
			return *this;
		}
	//Subscript operator 
		T	&operator[](int i)
		{
			if (i > -1 && i < (int)this->size)
				return array[i];
			else
				throw myexception();
		}
	//Getters ::
		T *getArray(){return array;}
	//Exceptions Derrived Class ::
		class myexception : public std::exception
		{
			const char *what() const throw()
			{
				return "\033[0;31mERROR";
			}
		};
	//functions
		unsigned int	_size(void)
		{
			return this->size;
		}
};

#endif