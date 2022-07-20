#ifndef FIXED
#define FIXED

#include <iostream>
#include <cmath>
using std::cout;
using std::endl;
using std::ostream;

class Fixed
{
	private:
		int	fixedPoint;
		static const int fB = 8;
	public:
		Fixed();		//canonical
		Fixed(const Fixed &obj);	//create an object and copy to it     //canonical
		Fixed &operator= (const Fixed& obj); //replace the object content with existing one   //canonical
		~Fixed();				//canonical
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
		float	toFloat(void) const;
		int		toInt(void) const;
		Fixed(const int a);
		Fixed(const float n);




		Fixed	operator*(const Fixed &ff);
		Fixed	operator++(void);
		Fixed	operator++(int);
		Fixed	operator--(void);
		Fixed	operator--(int);
		bool	operator>(const Fixed &ff);
		bool	operator>=(const Fixed &ff);
		bool	operator<(const Fixed &ff);
		bool	operator<=(const Fixed &ff);
		bool	operator==(const Fixed &ff);
		bool	operator!=(const Fixed &ff);
		Fixed	operator+(const Fixed &ff);
		Fixed	operator-(const Fixed &ff);
		Fixed	operator/(const Fixed &ff);
		
		static Fixed	max(const Fixed &a, const Fixed &b);
		static Fixed	max(Fixed &a, Fixed &b);
		static Fixed	min(const Fixed &a, const Fixed &b);
		static Fixed	min(Fixed &a, Fixed &b);
};

std::ostream & operator << (std::ostream &out, const Fixed &c);

#endif