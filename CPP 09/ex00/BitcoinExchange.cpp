#include "BitcoinExchange.hpp"

BitcoinExchange::BitcoinExchange()
{
}
BitcoinExchange::BitcoinExchange(const BitcoinExchange& btc_exchange): _data_base(btc_exchange._data_base), _input_data(btc_exchange._input_data)
{
}
BitcoinExchange BitcoinExchange::operator=(const BitcoinExchange& btc_exchange)
{
	_data_base = btc_exchange._data_base;
	_input_data = btc_exchange._input_data;
	return (*this);
}
BitcoinExchange::~BitcoinExchange()
{
}

void	BitcoinExchange::check_file(std::ifstream& file)
{
	if (!file.is_open())
		throw std::runtime_error("Error: could not open file");
	for(std::string	line; getline(file, line);)
	{
		check_valid_input(line);
	}
}
void	BitcoinExchange::check_valid_input(std::string& line)
{
	try
	{
		if (line.empty())
			return ;
		if (std::count(line.begin(), line.end(), '|') != 1 || std::count(line.begin(), line.end(), ' ') != 2
			|| line.find(" | ") == std::string::npos || !check_date_and_value(line))
			throw std::runtime_error("Error: bad input => " + line);
		std::cout << line << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
bool	BitcoinExchange::check_date_and_value(std::string& line)
{
	std::istringstream	s_line(line);
	std::string 		element;
	getline(s_line, element, ' ');
	if (!check_date(element))
		return false;
	getline(s_line, element, ' ');
	getline(s_line, element, '\0');
	if (!check_value(element))
		return false;
	return (true);
}
bool	BitcoinExchange::check_date(std::string& date)
{
	if (std::count(date.begin(), date.end(), '-') != 2 
		|| date.find_first_of("-") != 4 || date.find_last_of("-") != 7)
		return false;
	return (true);
}
bool	BitcoinExchange::check_value(std::string& value)
{
	return (true);
}