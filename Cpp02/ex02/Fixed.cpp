#include "Fixed.h"

Fixed::Fixed()
{
	fixedPoint = 0;
}

Fixed::Fixed(const Fixed &obj)
{
	*this = obj;
}

Fixed & Fixed::operator= (const Fixed &obj)
{
	if (this == &obj)
        return *this;
    fixedPoint = obj.getRawBits();
    return *this;
}

Fixed::~Fixed()
{}

int	Fixed::getRawBits() const
{
	return (fixedPoint);
}

void	Fixed::setRawBits(int const raw)
{
	fixedPoint = raw;
}

Fixed::Fixed(const int a)
{
	fixedPoint = (int)(roundf(a * 256));
}

float	Fixed::toFloat() const
{
	return ((double)this->fixedPoint / (double)256);
}

Fixed::Fixed(const float n)
{
	fixedPoint = (int)(roundf(n * 256));
	toFloat();
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

Fixed Fixed::operator *(const Fixed &s)
{
	Fixed	fix(this->toFloat() * s.toFloat());
	return (fix);
}

Fixed	Fixed::operator++(void)
{
	this->fixedPoint++;
	return *this;
}

Fixed	Fixed::operator++(int)
{
	Fixed fix;
	fix = *this;

	this->fixedPoint++;
	return fix;
}

Fixed	Fixed::operator--(void)
{
	this->fixedPoint--;
	return *this;
}

Fixed	Fixed::operator--(int)
{
	Fixed fix;
	fix = *this;

	this->fixedPoint--;
	return fix;
}

Fixed Fixed::max(const Fixed &a, const Fixed &b)
{
	return (((Fixed)a > (Fixed)b) ? a : b);
}

Fixed Fixed::max(Fixed &a, Fixed &b)
{
	return ((a.fixedPoint > b.fixedPoint) ? a : b);
}

bool Fixed::operator>(const Fixed &ff)
{
	if (this->fixedPoint > ff.fixedPoint)
		return true;
	return false;	
}

bool Fixed::operator>=(const Fixed &ff)
{
	if (this->fixedPoint >= ff.fixedPoint)
		return true;
	return false;	
}

bool Fixed::operator<(const Fixed &ff)
{
	if (this->fixedPoint < ff.fixedPoint)
		return true;
	return false;	
}

bool Fixed::operator<=(const Fixed &ff)
{
	if (this->fixedPoint <= ff.fixedPoint)
		return true;
	return false;	
}

bool Fixed::operator==(const Fixed &ff)
{
	if (this->fixedPoint == ff.fixedPoint)
		return true;
	return false;
}

bool Fixed::operator!=(const Fixed &ff)
{
	if (this->fixedPoint != ff.fixedPoint)
		return true;
	return false;
}

Fixed Fixed::operator+(const Fixed &ff)
{
	this->fixedPoint += ff.fixedPoint;
	return *this;
}

Fixed Fixed::operator-(const Fixed &ff)
{
	this->fixedPoint -= ff.fixedPoint;
	return *this;
}

Fixed Fixed::operator/(const Fixed &ff)
{
	Fixed fix (this->toFloat() / ff.toFloat());
	return fix;
}

Fixed Fixed::min(const Fixed &a, const Fixed &b)
{
	return ((a.fixedPoint <= b.fixedPoint) ? a : b);
}

Fixed Fixed::min(Fixed &a, Fixed &b)
{
	return ((a.fixedPoint <= b.fixedPoint) ? a : b);
}