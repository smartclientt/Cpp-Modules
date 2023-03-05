#include "ScavTrap.hpp"
int main()
{
	ScavTrap robot("saad");

	std::cout << "--------------------------" << std::endl;
	robot.takeDamage(2);
	robot.attack("oho ya ho");
	robot.guardGate();
	std::cout << "--------------------------" << std::endl;
	return (0);
}
