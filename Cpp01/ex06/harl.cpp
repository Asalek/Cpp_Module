#include "harl.hpp"

void	Harl::DEBUG(void)
{
	cout << "I love having extra bacon for my double-cheese-triple-pickle-special-"
	"ketchup burger. I really do!" << endl;
}

void	Harl::ERROR(void)
{
	cout << "This is unacceptable! I want to speak to the manager now." << endl;
}

void	Harl::INFO(void)
{
	cout << "I cannot believe adding extra bacon costs more money. You didn’t put"
	"enough bacon in my burger! If you did, I wouldn’t be asking for more!" << endl;
}

void	Harl::WARNING(void)
{
	cout << "I think I deserve to have some extra bacon for free. I’ve been coming for"
	"years whereas you started working here since last month." << endl;
}

void	Harl::complain(string level)
{
	string levs[4] = {"DEBUG", "ERROR", "INFO", "WARNING"};
	int	levelss;
	int	i;

	i = 0;
	while (i < 4)
	{
		while (!level.compare(levs[i]))
		{
			levelss = i;
			break;
		}
		i++;
	}
	switch (levelss)
	{
		case 0:
			this->DEBUG();
			break ;
		case 1:
			this->ERROR();
			break ;
		case 2:
			this->INFO();
			break ;
		case 3:
			this->WARNING();
			break ;
		default:
			cout << "Please enter a valid option DEBUG, ERROR, INFO or WARNING" << endl;
			break;
	}
}