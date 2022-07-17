#include "classes.hpp"

void    welcomeScreen()
{
    cout<<"Welcome to My PhoneBook simple Application"<<endl;
    cout<<"               HOW TO USE : "<<endl;
    cout<<"                  ADD"<<endl;
    cout<<"                 SEARCH"<<endl;
    cout<<"                  EXIT"<<endl;
}

void Contact:: fillContact(string f, string l, string n, string p, string d)
{
	this->firstName = f;
	this->lastName = l;
	this->nickName = n;
	this->phoneNumber = p;
	this->darkestSecret = d;
}

void	PhoneBook:: cin_infos(int i)
{
	string	str[5];

	cout<<"First Name :  ";
	cin>>str[0];
	cout<<"Last Name :  ";
	cin>>str[1];
	cout<<"Nick Name :  ";
	cin>>str[2];
	cout<<"Phone Number :  ";
	cin>>str[3];
	cout<<"Darkest Secret :  ";
	cin>>str[4];
	if (i > 7)
		i = 0;
	contact[i].fillContact(str[0], str[1], str[2], str[3], str[4]);

	// PhoneBook cox[8];
	// cox[0] = PhoneBook("asd", "adsf", "Asdf", "Asdf", "Asdf");
	// cox[0].allContact();
}

void	print_value(string str)
{
	cout << "|";
	cout << "  ";

	if (str.length() > 10)
	{
		str = str.substr(0, 9);
		cout << str << ".";
		cout << "  ";
	}
	else
	{
		cout <<str;
		cout << "  ";
	}
}

void	PhoneBook:: all_contact(int	sizeContact)
{
	int	x = 0;

	cout<<"index | firstName | lastName |  nickName"<<endl;
	for (int i = 0; i < sizeContact; i++)
	{
		cout << "  "<<i;
		cout << "  ";
		print_value(contact[i].firstName);
		print_value(contact[i].lastName);
		print_value(contact[i].nickName);
		cout << endl;
	}
	cout<<"Enter The search index :"<<endl;
	cin>>x;
	if (x >= 0 && x <= sizeContact)
	{	
		cout<<"index | firstName | lastName |  nickName"<<endl;
		cout << "  "<<x;
		print_value(contact[x].firstName);
		print_value(contact[x].lastName);
		print_value(contact[x].nickName);
		cout << endl;
	}
}

int main()
{
	PhoneBook phone;
	string	command;
	int		i;

	i = 0;
	while (1)
	{
		welcomeScreen();
		cin>>command;
		if (!command.compare("ADD") || !command.compare("add"))
		{
			phone.cin_infos(i);
			if (i < 8)
				i++;
		}
		else if (!command.compare("SEARCH") || !command.compare("search"))
		{
			phone.all_contact(i);
		}
		else if (!command.compare("EXIT") || !command.compare("exit"))
		{
			cout<<"Exit Properlly (^-^)"<<endl;
			return (0);
		}
	}
	return (0);
}