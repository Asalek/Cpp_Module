#ifndef STATICCAST
#define STATICCAST

#include <iostream>
#include <typeinfo>
#include <limits>
using std::string;
using std::cout;
using std::endl;
using std::type_info;
using std::stoi;
using std::stod;
using std::stof;

class StaticCast
{
	char	type;
	int		int_t;
	double	double_t;
	float	float_t;
	char	char_t;
	int 	after_comma;

	public:
		StaticCast();
		StaticCast(const StaticCast &sCast);
		StaticCast &operator=(const StaticCast &sCast);
		~StaticCast();
		void	getType(char *value);
		//getters
		char getType(){return type;}
		char getChar(){return char_t;}
		int getInt(){return int_t;}
		double getDouble(){return double_t;}
		float getFloat(){return float_t;}
		//setter
		void	setComma(int comma){this->after_comma = comma;}
		//methods
		void	char_to_all(char *value);
		void	int_to_all(char *value);
		void	double_to_all(char *value);
		void	float_to_all(char *value);
		void	printf_all(void);
		char	checkDoubleFloat(char *value);
		class error: public std::exception
		{
			const char *what() const throw()
			{
				return "\033[0;31m Error While Conversion !";
			}
		};
};

char	checkINT(char *value);


#endif

/*
	int age = 23;					// i
	float price = 24.99f;			// f
	double PI = 3.1415926535;		// d
	char dollar = '$';				// c
	bool hungry = false;			// b

	cout << typeid(age).name();    // i

*/