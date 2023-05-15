#include "RPN.hpp"

RPN::RPN()
{
}
RPN::RPN(const RPN& rpn): _equation(rpn._equation)
{
}
RPN& RPN::operator=(const RPN& rpn)
{
	_equation = rpn._equation;
	return (*this);
}
RPN::~RPN()
{}

void	RPN::checkArgs(std::string& args)  const
{
	std::istringstream	line(args);
	std::string	nbr;
	int oper_count = 0;
	int nbr_count = 0;
	for(;getline(line, nbr, ' ');)
	{
		if (nbr.empty())
			continue;
		parssNbr(nbr, oper_count, nbr_count);
	}
	if (nbr_count < 2 || nbr_count != oper_count + 1)
		throw std::runtime_error("Error");
}

void	RPN::parssNbr(std::string& nbr, int& oper_count, int& nbr_count)  const
{
	std::string check_list = "0123456789+-*/";
	if (nbr.length() != 1 || check_list.find(nbr) == std::string::npos)
		throw std::runtime_error("Error");
	if (oper_count > 0 && nbr_count - oper_count == 0)
		throw std::runtime_error("Error");
	if (isnumber(nbr[0]))
		nbr_count++;
	else
		oper_count++;
}

void	RPN::RPN_Calcul(std::string& args)
{
	std::istringstream	line(args);
	std::string	nbr;
	for(;getline(line, nbr, ' ');)
	{
		if (nbr.empty())
			continue;
		if (isnumber(nbr[0]))
			_equation.push(atoi(nbr.c_str()));
		else
		{
			double nbr2 = _equation.top();
			_equation.pop();
			double nbr1 = _equation.top();
			_equation.pop();
			if (nbr == "+")
				_equation.push(nbr1 + nbr2);
			else if (nbr == "-")
				_equation.push(nbr1 - nbr2);
			else if (nbr == "*")
				_equation.push(nbr1 * nbr2);
			else if (nbr == "/")
			{
				if (nbr2 == 0)
					throw std::runtime_error("Error");
				_equation.push(nbr1 / nbr2);
			}
		}
	}
	std::cout << _equation.top() << std::endl;
}