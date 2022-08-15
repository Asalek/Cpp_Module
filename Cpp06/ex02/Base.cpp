#include "Base.hpp"

Base *generate(void)
{
	Base *a = new A;
	Base *b = new B;
	Base *c = new C;

	srand(time(0));
	int random = rand() % 3 + 1;
	switch (random)
	{
		case 1:
			delete b;
			delete c;
			return a;
			break;
		case 2:
			delete a;
			delete c;
			return b;
			break;
		case 3:
			delete b;
			delete a;
			return c;
			break;
		default:
			break;
	}
	return NULL;
}

void	identify(Base *ptr)
{
	A *a = dynamic_cast<A *>(ptr);
	if (a)
	{
		cout << "A Child Class" <<endl;
		return ;
	}
	B *b = dynamic_cast<B *>(ptr);
	if (b)
	{
		cout << "B Child Class" <<endl;
		return ;
	}
	C *c = dynamic_cast<C *>(ptr);
	if (c)
	{
		cout << "C Child Class" <<endl;
		return ;
	}
}

void	identify(Base &p)
{
	try
	{
		A &a = dynamic_cast<A &>(p);
		cout << "A Child Class" <<endl;
		(void)a;
	}
	catch(const std::exception& e)
	{(void)e;}

	try
	{
		B &b = dynamic_cast<B &>(p);
		cout << "B Child Class" <<endl;
		(void)b;
	}
	catch(const std::exception& e)
	{(void)e;}

	try
	{
		C &c = dynamic_cast<C &>(p);
		cout << "C Child Class" <<endl;
		(void)c;
	}
	catch(const std::exception& e)
	{(void)e;}
}