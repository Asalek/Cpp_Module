#include "harl.h"

int main()
{
	Harl harl;

	harl.complain("ERROR");
	harl.complain("INFO");
	harl.complain("WARNING");
	harl.complain("DEBUG");
	return (0);
}