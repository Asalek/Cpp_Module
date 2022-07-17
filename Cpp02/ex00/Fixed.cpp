#include "Fixed.h"

Fixed::Fixed()
{
	cout<<"Default Constructor Called"<<endl;
	fixedPoint = 0;
}

Fixed::Fixed(Fixed &obj)
{
	cout<<"Copy Constructor Called"<<endl;
	fixedPoint = obj.fixedPoint;
}

// A simplistic implementation of operator= //if = found do this // if + - / ...
Fixed& Fixed::operator= (const Fixed& obj)
{
	//self-assignment guard
	if (this == &obj)
        return *this;
    // do the copy
    fixedPoint = obj.fixedPoint;
    // return the existing object so we can chain this operator
    return *this;
}

Fixed::~Fixed()
{
	cout<<"Destructor Called"<<endl;
}

int	Fixed::getRawBits()
{
	cout<<"getRawBits member function called"<<endl;
	return(fixedPoint);
}

void	Fixed::setRawBits(int raw)
{
	cout<<"setRawBIts memeber function called"<<endl;
	fixedPoint = raw;
}
