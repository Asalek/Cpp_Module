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

		Fixed(const int a);
		Fixed(const float n);

		float	toFloat(void) const;
		int		toInt(void) const;

		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};

std::ostream & operator << (std::ostream &out, const Fixed &c);

#endif