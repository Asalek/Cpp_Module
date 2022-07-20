
# include"Fixed.h"

int main( void )
{
	Fixed a;
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );

	cout << a << endl;
	cout << ++a << endl;
	cout << a << endl;
	cout << a++ << endl;
	cout << a << endl;
	cout << b << endl;
	cout << Fixed::max( a, b ) << endl;

	cout<<endl<<"// My features functions"<<endl<<endl;

	cout << "min a, b : " << Fixed::min( a, b ) << endl;
	cout << "a < b : " << (a < b) << endl;
	cout << "a == b : " << (a == b) << endl;
	cout << "a != b : " << (a != b) << endl;
	a = 12;
	cout << a << endl;
	cout << b << endl;
	cout << "a / b : " << (a / b) << endl;

	return (0);
}
