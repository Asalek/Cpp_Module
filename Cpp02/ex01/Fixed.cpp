#include "Fixed.h"

Fixed::Fixed()
{
	cout<<"Default Constructor Called"<<endl;
	fixedPoint = 0;
}

Fixed::Fixed(const Fixed &obj)
{
	cout<<"Copy Constructor Called"<<endl;
	*this = obj;
}

Fixed & Fixed::operator= (const Fixed &obj)
{
	cout<<"Copy assignment operator called"<<endl;
	if (this == &obj)
        return *this;
    fixedPoint = obj.getRawBits();
    return *this;
}

Fixed::~Fixed()
{
	cout<<"Destructor Called"<<endl;
}

int	Fixed::getRawBits() const
{
	return (fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	cout<<"setRawBIts memeber function called"<<endl;
	fixedPoint = raw;
}

Fixed::Fixed(const int a)
{
	cout<<"Int constructor called"<<endl;
	fixedPoint = (int)(roundf(a * 256)); //(1 << fB)
}

Fixed::Fixed(const float n)
{
	cout<<"Float constructor called"<<endl;
	fixedPoint = (int)(roundf(n * 256));
}

float	Fixed::toFloat() const
{
	return ((double)this->fixedPoint / (double)256);
}

int	Fixed::toInt() const
{
	return ((int)this->fixedPoint / (int)256);
}

ostream &operator<< (ostream &out, const Fixed &flt)
{
	out << flt.toFloat();
	return out;
}
