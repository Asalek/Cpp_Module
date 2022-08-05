#include "ShrubberyCreationForm.h"
#include <fstream>

/*      constructors     */

ShruForm::ShruForm():Form("no_name", 145, 137)
{
	target = "ASALEK";
}

ShruForm::ShruForm(string target):Form(target, 145, 137)
{
	this->target = target;
}

ShruForm::ShruForm(const ShruForm &shru)
{
	*this = shru;
}

ShruForm	&ShruForm::operator=(const ShruForm &shru)
{
	if (this == &shru)
		return *this;
	this->target = shru.target;
	return *this;
}

//			Destructor    

ShruForm::~ShruForm(){}

//			methods

void	ShruForm::execute(Bureaucrat const &executor)const
{
	string fileName = this->getName();
	fileName.append("_shrubbery");
	if (executor.getGrade() > 145)
		throw GradeTooLowException();
	else if (this->getSign() == false)
	{
		cout << "Bureaucrat Not Signed !!"<< endl;
		return ;
	}
	else
	{
		ofstream	file(fileName);
		if (file.is_open())
		{
			file << "			                      ___ \n";
			file << "                _,-'""   """"`--. \n";
			file << "             ,-'          __,,-- \\ \n";
			file << "           ,'    __,--""""dF      ) \n";
			file << "          /   .-\"Hb_,--""dF      /  \n";
			file << "        ,'       _Hb ___dF\"-._,-' \n";
			file << "      ,'      _,-""""   ""--..__ \n";
			file << "     (     ,-'                  `. \n";
			file << "      `._,'     _   _             ; \n";
			file << "       ,'     ,' `-'Hb-.___..._,-' \n";
			file << "       \\    ,'\"Hb.-'HH`-.dHF\" \n";
			file << "        `--'   \"Hb  HH  dF\" \n";
			file << "                \"Hb HH dF \n";
			file << "                 \"HbHHdF \n";
			file << "                  |HHHF \n";
			file << "                  |HHH| \n";
			file << "                  |HHH| \n";
			file << "                  |HHH| \n";
			file << "                  |HHH| \n";
			file << "                  dHHHb \n";
			file << "                .dFd|bHb.               o \n";
			file << "      o       .dHFdH|HbTHb.          o / \n";
			file << "  Y  |  __,dHHFdHH|HHhoHHb.__Krogg  Y \n";
			file << "########################################## \n";
			file.close();
		}
	}
}
