#include "harl.h"

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
	string complains [4] = {"DEBUG", "ERROR", "INFO", "WARNING"};
	void (Harl::*funcs[4])();
	int	i;

	funcs[0] = &Harl::DEBUG;
	funcs[1] = &Harl::ERROR;
	funcs[2] = &Harl::INFO;
	funcs[3] = &Harl::WARNING;
	i = 0;
	while (i < 4)
	{
		while (!level.compare(complains[i]))
		{
			(this->*funcs[i])();
			break ;
		}
		i++;
	}
}
