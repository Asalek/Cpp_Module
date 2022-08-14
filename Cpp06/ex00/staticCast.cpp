#include "staticCast.hpp"

StaticCast::StaticCast()
{
	this->type = 'n';
}

StaticCast::StaticCast(const StaticCast &sCast)
{
	*this = sCast;
}

StaticCast	&StaticCast::operator=(const StaticCast &sCast)
{
	if (this == &sCast)
		return *this;
	this->type = sCast.type;
	return *this;
}

StaticCast::~StaticCast(){}

void	StaticCast::getType(char *value)
{
	type = 'n';
	if (type == 'n')
		type = checkINT(value);
	if (type == 'n')
		type = checkDoubleFloat(value);
	if (type == 'n' && strlen(value) == 1)
		this->type = 'c';
	if (type == 'n')
	{
		throw error();
		return ;
	}
	if (type == 'i')
		int_to_all(value);
	if (type == 'd')
		double_to_all(value);
	if (type == 'f')
		float_to_all(value);	
	if (type == 'c')
		char_to_all(value);
}

void	StaticCast::printf_all()
{
	string	NonDisplayabl = "Non Displayable";
	string	impossible = "Impossible";
	//char :::
	if (this->int_t > CHAR_MAX || this->int_t < CHAR_MIN)
		cout << "char   : " << impossible << endl;
	else if (!isprint(this->char_t))
		cout << "char   : " << NonDisplayabl << endl;
	else
		cout << "char   : '" << this->char_t << "'" << endl;
	if (this->double_t > INT_MAX || this->double_t < INT_MIN || this->double_t != this->double_t)
		cout << "int    : " << impossible << endl;
	else
		cout << "int    : " << this->int_t << endl;
	if (this->float_t != this->float_t)
		cout << "float  : " << this->float_t << "f" << endl;
	else
		cout << "float  : " << this->float_t <<(this->after_comma == 0 ? ".0f" : "f" )<< endl;
	if (this->double_t != this->double_t)
		cout << "double : " << this->double_t << endl;
	else
		cout << "double : " << this->double_t << (this->after_comma == 0 ? ".0" : "" ) << endl;
}

void	StaticCast::float_to_all(char *str)
{
	this->float_t = stof(str);
	// this->double_t = stod(str);
	// this->int_t = stoi(str);
	this->int_t = static_cast<int>(this->float_t);
	this->double_t = static_cast<double>(this->float_t);
	this->char_t = static_cast<char>(this->float_t);
}

void	StaticCast::double_to_all(char *str)
{
	this->double_t = stod(str);
	this->int_t = static_cast<int>(this->double_t);
	this->float_t = static_cast<float>(this->double_t);
	this->char_t = static_cast<char>(this->double_t);
}

void	StaticCast::char_to_all(char *str)
{
	this->char_t = str[0];
	this->int_t = static_cast<int>(this->char_t);
	this->float_t = static_cast<float>(this->char_t);
	this->double_t = static_cast<double>(this->char_t);
}
void	StaticCast::int_to_all(char *str)
{
	this->int_t = stoi(str);
	this->float_t = static_cast<float>(this->int_t);
	this->double_t = static_cast<double>(this->int_t);
	this->char_t = static_cast<char>(int_t);
}

char StaticCast::checkDoubleFloat(char *str)
{
	string inf[3] = {"-inf", "+inf", "nan"};
	string inff[3] = {"-inff", "+inff", "nanf"};
	int	i = -1, ac = 0;
	this->after_comma = ac;

	while (++i < 3)
	{
		if (inf[i].compare(str) == 0)
			return 'd';
		if (inff[i].compare(str) == 0)
			return 'f';
	}
	i = 0;
	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if (!isdigit(str[i]))
			break ;
		i++;
		ac++;
	}
	if (str[i] != '.' || ac == 0)
		return 'n';
	i++;
	ac = 0;
	while (str[i])
	{
		if(!isdigit(str[i]))
			break ;
		i++;
		ac++;
	}
	if (str[i - 1] == '0')
		this->after_comma = 0;
	else
		this->after_comma = ac;
	if (str[i] == 'f' && str[i + 1] == '\0' && ac > 0)
		return 'f';
	if (ac > 0 && str[i] == '\0')
		return 'd';
	return 'n';
}

char	checkINT(char *str)
{
	int	i = 0;

	if (str[i] == '-')
		i++;
	while (str[i])
	{
		if(!isdigit(str[i]))
			return 'n';
		i++;
	}
	return 'i';
}