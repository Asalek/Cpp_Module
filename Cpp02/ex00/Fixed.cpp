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

// A simplistic implementation of operator= //if = found do this // if + - / ...
Fixed & Fixed::operator= (const Fixed &obj)
{
	cout<<"Copy assignment operator called"<<endl;
	//self-assignment guard
	if (this == &obj)
        return *this;
    // do the copy
    fixedPoint = obj.getRawBits();
    // return the existing object so we can chain this operator
    return *this;
}

Fixed::~Fixed()
{
	cout<<"Destructor Called"<<endl;
}

int	Fixed::getRawBits() const
{
	cout<<"getRawBits member function called"<<endl;
	return (fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	cout<<"setRawBIts memeber function called"<<endl;
	fixedPoint = raw;
}
