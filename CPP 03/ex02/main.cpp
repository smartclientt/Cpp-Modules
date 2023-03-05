#include "FragTrap.hpp"

int main()
{
	FragTrap robot("Fraaaaaaag");

	std::cout << "--------------------------" << std::endl;
	robot.takeDamage(2);
	robot.attack("oho ya ho");
	std::cout << "--------------------------" << std::endl;
	return (0);
}
