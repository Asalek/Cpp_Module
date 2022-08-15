#include "Base.hpp"

int main()
{
	Base *ptr;
	ptr = generate();
	identify(*(ptr));
	identify(ptr);
	return 0;
}