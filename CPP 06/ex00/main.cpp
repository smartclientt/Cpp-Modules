#include "ScalarConverter.hpp"

int main(int ac, char **av)
{
	if (ac != 2)
		return 1;
	std::string str = std::string(av[1]);
	ScalarConverter::convert(str);
	return 0;
}
