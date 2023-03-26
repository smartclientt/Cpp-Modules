#include "RPN.hpp"

int main(int ac, char **av)
{
	try
	{
		if (ac != 2)
			throw std::runtime_error("Error: could not open file");
		std::string args(av[1]);
		RPN	rpn;
		rpn.checkArgs(args);
		rpn.RPN_Calcul(args);
	}
	catch(const std::exception& exp)
	{
		std::cout << exp.what() << '\n';
	}
	return 0;
}