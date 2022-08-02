#ifndef ShrubberyCreationForm_H
#define ShrubberyCreationForm_H
#include "Form.h"

using std::ifstream; // Read only
using std::ofstream; // Create and write
using std::fstream;   // combine of READ WRITE CREATE

class ShruForm: public Form
{
	public:
		ShruForm();
		~ShruForm();
		ShruForm(const ShruForm &s);
		ShruForm &operator=(const ShruForm &s);
		ShruForm(const Form &s);
};

#endif