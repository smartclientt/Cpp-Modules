#pragma once

#include <iostream>
#include <sstream>
#include <fstream>
#include <algorithm>
#include <map>

class	BitcoinExchange
{
	public:
		BitcoinExchange();
		BitcoinExchange(const BitcoinExchange& btc_exchange);
		BitcoinExchange operator=(const BitcoinExchange& btc_exchange);
		~BitcoinExchange();

		void	check_file(std::ifstream& file);
		void	check_valid_input(std::string& line);
		bool	check_date_and_value(std::string& line);
		bool	check_date(std::string& date);
		bool	check_value(std::string& value);

	private:
		std::map<std::string, double>	_data_base;
		std::map<std::string, double>	_input_data;
};
