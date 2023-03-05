#include "ClapTrap.hpp"

int main()
{
	ClapTrap clap("saad");
	ClapTrap copy_clap(clap);
	ClapTrap assigne = clap;

	std::cout << "--------------------------" << std::endl;
	clap.attack("said");
	clap.beRepaired(5);
	clap.takeDamage(2);
	std::cout << "--------------------------" << std::endl;
	return (0);
}
