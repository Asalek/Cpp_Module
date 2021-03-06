#ifndef FIXED
#define FIXED

#include <iostream>
using std::cout;
using std::endl;

class Fixed
{
	private:
		int	fixedPoint;
		static const int fractionBits = 8;
	public:
		Fixed();
		Fixed(const Fixed &obj);	//create an object and copy to it
		Fixed &operator= (const Fixed& obj); //replace the object content with existing one
		~Fixed();
		int	getRawBits(void) const;
		void	setRawBits(int const raw);
};


#endif