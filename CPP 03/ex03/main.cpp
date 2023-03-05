#include "DiamondTrap.hpp"

// int main()
// {
// 	DiamondTrap robot("Robot");

// 	std::cout << "--------------------------" << std::endl;
// 	robot.attack("Not Me");
// 	robot.takeDamage(1);
// 	robot.beRepaired(1);
// 	robot.whoAmI();
// 	std::cout << "--------------------------" << std::endl;
// 	return (0);
// }

int main()
{
	DiamondTrap r1("Robot1");
	std::cout << "Hit = " << r1.getHit() << std::endl;
	std::cout << "Energy = " << r1.getEnergy() << std::endl;
	std::cout << "Damage = " << r1.getDamage() << std::endl;
	r1.whoAmI();
	std::cout << "=========================================" << std::endl;
	r1.attack("Robot2");
	DiamondTrap r2(r1);
}
