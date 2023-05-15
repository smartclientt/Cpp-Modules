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
	std::string	line;
	for(bool i = true; getline(file, line);)
	{
		if (line.empty())
			continue;
		int j = 0;
		for(; isspace(line[j]) || iswspace(line[j]); j++);
		if (line[j] == '\0')
			continue;
		if (i == true && line == "date | value")
			continue;
		i = false;
		check_valid_input(line);
	}
}
void	BitcoinExchange::check_valid_input(std::string& line)
{
	try
	{
		if (std::count(line.begin(), line.end(), '|') != 1 || std::count(line.begin(), line.end(), ' ') != 2
			|| line.find(" | ") == std::string::npos || !check_date_and_value(line))
			throw std::runtime_error("Error: bad input => " + line);
		std::map<std::string, double>::iterator it = _data_base.upper_bound(_input_data.first);
		if (it == _data_base.begin())
			throw	std::runtime_error("No data match in Data Base!");
		it--;
		std::cout << _input_data.first << " => " << _input_data.second << " = "  <<  it->second * _input_data.second << std::endl;
	}
	catch(const std::exception& e)
	{
		std::cerr << e.what() << '\n';
	}
	
}
bool	BitcoinExchange::check_date_and_value(std::string& line)
{
	std::istringstream	s_line(line);
	std::string 		date;
	std::string 		value;
	std::string 		deliminator;
	getline(s_line, date, ' ');
	if (!check_date(date))
		return false;
	getline(s_line, deliminator, ' ');
	getline(s_line, value, '\0');
	if (!check_value(value))
		return false;
	_input_data = std::pair<std::string, double>(date, atof(value.c_str()));
	return (true);
}
bool	BitcoinExchange::isLeapYear(int year) {
    if (year % 4 == 0) {
        if (year % 100 == 0) {
            return year % 400 == 0;
        }
        return true;
    }
    return false;
}
bool	BitcoinExchange::check_date(std::string& date)
{
	if (std::count(date.begin(), date.end(), '-') != 2 
		|| date.find_first_of("-") != 4 || date.find_last_of("-") != 7)
		return false;
	if (atoi(date.substr(0, 4).c_str()) < 2009 || atoi(date.substr(0, 4).c_str()) > 2022)
		return false;
	std::tm	time;
	if (strptime(date.c_str(), "%Y-%m-%d", &time) == 0)
		return false;
	if (atoi(date.substr(5, 2).c_str()) < 8 && atoi(date.substr(5, 2).c_str()) % 2 == 0 && atoi(date.substr(8, 2).c_str()) > 30)
		return false;
	if (atoi(date.substr(5, 2).c_str()) >= 8 && atoi(date.substr(5, 2).c_str()) % 2 == 1 && atoi(date.substr(8, 2).c_str()) > 30)
		return false;
	if (isLeapYear(atoi(date.substr(0, 4).c_str())) && atoi(date.substr(5, 2).c_str()) == 2 && atoi(date.substr(8, 2).c_str()) > 29)
		return false;
	if (!isLeapYear(atoi(date.substr(0, 4).c_str())) && atoi(date.substr(5, 2).c_str()) == 2 && atoi(date.substr(8, 2).c_str()) > 28)
		return false;
	return (true);
}
bool	BitcoinExchange::check_value(std::string& value)
{
	if (std::count(value.begin(), value.end(), '.') > 1)
		return false;
	int i = 0;
	if (value[i] == '+' || value[i] == '-')
		i++;
	for(; isdigit(value[i]) || value[i] == '.'; i++);
	if (value[i] != '\0')
		return false;
	if (atof((value).c_str()) < 0)
		throw std::runtime_error("Error: not a positive number.");
	if (atof((value).c_str()) > INT_MAX)
		throw std::runtime_error("Error: too large a number.");
	return (true);
}

// map manipulation
void	BitcoinExchange::fillMap(std::ifstream& data_file)
{
	if (!data_file.is_open())
		throw std::runtime_error("Error: No data to work on");
	int i = 0;
	for(std::string line; getline(data_file, line); i++)
	{
		if (i == 0)
			continue;
		std::pair<std::string, double> data_line;
		data_line.first = line.substr(0, line.find(','));
		data_line.second = atof(line.substr(line.find(',') + 1).c_str());
		_data_base.insert(data_line);
	}
	// for(std::map<std::string, double>::iterator it = _data_base.begin(); it != _data_base.end(); it++)
	// {
	// 	std::cout << it->first << " ||| " << it->second << std::endl;
	// }
}