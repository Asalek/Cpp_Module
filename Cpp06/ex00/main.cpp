#include "staticCast.hpp"

int main(int ac, char **av)
{
	StaticCast sc;

	if (ac != 2)
	{
		cout << "\033[35m Bad argumnent try only 1 after ./converter" << endl;
		return (0);
	}
	try
	{
		cout << sc.getType() << endl;
		sc.printf_all();
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	


	return 0;
}