#include "iter.hpp"

int main()
{
	// char s1[6] = "ayoub";
	int s2[5] = {1, 2, 3, 4, 5};

	std::cout<<s2[1]<<std::endl;
	
	::iter(s2, 5, changeArray);

	std::cout<<s2[1]<<std::endl;
	return 0;
}