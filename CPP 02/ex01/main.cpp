#include "Fixed.hpp"

// void print_bin(void *a, int size)
// {
// 	int i = -1;
// 	;
// 	while (++i < size)
// 	{
// 		for (int j = 0; j < 8; j++)
// 			std::cout << (int)(((*(char *)a) >> j) & 1);
// 		std::cout << " ";
// 		a = ((char *)a) + 1;
// 	}
// 	std::cout << std::endl;
// }

int main( void )
{
	Fixed a;
	Fixed const b( 10 );
	Fixed const c( 42.42f );
	Fixed const d( b );
	a = Fixed( 1234.4321f );
	std::cout << "a is " << a << std::endl;
	std::cout << "b is " << b << std::endl;
	std::cout << "c is " << c << std::endl;
	std::cout << "d is " << d << std::endl;
	std::cout << "a is " << a.toInt() << " as integer" << std::endl;
	std::cout << "b is " << b.toInt() << " as integer" << std::endl;
	std::cout << "c is " << c.toInt() << " as integer" << std::endl;
	std::cout << "d is " << d.toInt() << " as integer" << std::endl;
	return 0;
}