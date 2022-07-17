#include <iostream>

using std::string;
using std::cout;
using std::endl;

int main()
{
	string var = "HI THIS IS BRAIN";
	string *varPTR;

	string &varREF = var;
	varPTR = &var;

	cout<<"memory Address of Var         : "<<&var<<endl;
	cout<<"memory Address held by VarPTR : "<<varPTR<<endl;
	cout<<"memory Address held by VarREF : "<<&varREF<<endl;

	cout<<"value of Var     : "<<var<<endl;
	cout<<"value of VarPTR  : "<<*varPTR<<endl;
	cout<<"value of VarREF  : "<<varREF<<endl;
}
