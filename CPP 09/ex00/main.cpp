#include "BitcoinExchange.hpp"

int main(int ac, char **av)
{
	try
	{
		if (ac != 2)
			throw std::runtime_error("Error: could not open file");
		std::ifstream input_file(av[1]);
		BitcoinExchange Btc;
		Btc.check_file(input_file);
	}
	catch(const std::exception& exp)
	{
		std::cerr << exp.what() << '\n';
	}
	
	return 0;
}