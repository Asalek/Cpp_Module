#include "ShrubberyCreationForm.h"
#include <fstream>

ShruForm::ShruForm()
{}

ShruForm::ShruForm(const Form &form)
{
	string fileName = form.getName();
	fileName.append("_shrubbery");
	if (form.getExec() == 137 && form.getGrade() == 145)
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

ShruForm::~ShruForm()
{}

/*

                      ___
                _,-'""   """"`--.
             ,-'          __,,-- \
           ,'    __,--""""dF      )
          /   .-"Hb_,--""dF      /
        ,'       _Hb ___dF"-._,-'
      ,'      _,-""""   ""--..__
     (     ,-'                  `.
      `._,'     _   _             ;
       ,'     ,' `-'Hb-.___..._,-'
       \    ,'"Hb.-'HH`-.dHF"
        `--'   "Hb  HH  dF"
                "Hb HH dF
                 "HbHHdF
                  |HHHF
                  |HHH|
                  |HHH|
                  |HHH|
                  |HHH|
                  dHHHb
                .dFd|bHb.               o
      o       .dHFdH|HbTHb.          o /
\  Y  |  \__,dHHFdHH|HHhoHHb.__Krogg  Y
##########################################

*/