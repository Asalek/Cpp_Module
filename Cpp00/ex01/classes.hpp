#ifndef CLASS_H
# define CLASS_H
#include <iostream>
using std::string;
using std::cout;
using std::endl;
using std::cin;
int	Check_emptyness(string str);
class Contact
{
    public:
    	string firstName;
		string lastName;
		string nickName;
		string phoneNumber;
		string darkestSecret;
        Contact (){}
        Contact (string f, string l, string n, string p, string d)
        {
            firstName = f;
            lastName = l;
            nickName = n;
            phoneNumber = p;
            darkestSecret = d;
        }
		void	fillContact(string f, string l, string n, string p, string d);
};


class PhoneBook : public Contact
{
	public :
		Contact contact[8];
	
	PhoneBook(){}

	PhoneBook(string f, string l, string n, string p, string d)
	: Contact (f, l, n, p, d)
	{}
	void	all_contact(int	i);
	void	cin_infos(int i);
};

#endif