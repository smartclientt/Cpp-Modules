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

int main(void) 
{
	Fixed a;
	Fixed b(a);
	Fixed c;
	c = b;
	std::cout << a.getRawBits() << std::endl;
	std::cout << b.getRawBits() << std::endl;
	std::cout << c.getRawBits() << std::endl;
	return 0;
}