#include "Harl.hpp"
int	funct()
{
	return (3);
}


int foo(int	x)
{
	return x;
}

int	main()
{
	Harl hr;

	hr.complain("DEBUG");

	hr.complain("WARNING");

	hr.complain("INFO");

	hr.complain("ERROR");

	hr.complain("sadasdas");
	return (0);
}