#include "Zombie.hpp"

void	Zombie::announce(void)
{
	std::cout << _name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::Zombie(void)
{
}

Zombie::Zombie(std::string name) :_name(name)
{
}

Zombie::~Zombie(void)
{
	std::cout << _name << " Zombie is destroyed" << std::endl;
}