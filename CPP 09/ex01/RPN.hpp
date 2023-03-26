#pragma once

#include <iostream>
#include <sstream>
#include <string>
#include <stack>
#include <algorithm>

class RPN
{
	public:
		RPN();
		RPN(const RPN& rpn);
		RPN& operator=(const RPN& rpn);
		~RPN();

		void	checkArgs(std::string& args) const;
		void	parssNbr(std::string& nbr, int& oper_count, int& nbr_count) const;
		void	RPN_Calcul(std::string& args);
	private:
		std::stack<double>	_equation;
};
