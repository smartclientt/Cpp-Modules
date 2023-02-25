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
	Fixed const b( Fixed( 5.05f ) * Fixed( 2 ) );
	std::cout << a << std::endl;
	std::cout << ++a << std::endl;
	std::cout << a << std::endl;
	std::cout << a++ << std::endl;
	std::cout << a << std::endl;
	std::cout << b << std::endl;
	std::cout << Fixed::min( a, b ) << std::endl;
	return 0;
}