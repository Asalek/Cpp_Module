#ifndef BASE_H
#define BASE_H

#include <iostream>
#include <time.h>
using std::cout;
using std::endl;

class Base
{
	public:
		virtual ~Base(){};
};

class A: public Base
{
	public:
		~A(){};
};
class B: public Base
{
	public:
		~B(){};
};
class C :public Base
{
	public:
		~C(){};
};

Base	*generate(void);
void	identify(Base *p);
void	identify(Base &p);

/*
	The dynamic_cast keyword casts a datum from one pointer
	or reference type to another, performing a runtime check
	to ensure the validity of the cast.

	If you attempt to cast to pointer to a type that is not a type of actual object,
		the result of the cast will be NULL.
	If you attempt to cast to reference to a type that is not a type of actual object,
		the cast will throw a bad_cast exception.

	TYPE& dynamic_cast<TYPE&> (object);
	TYPE* dynamic_cast<TYPE*> (object);
*/

#endif