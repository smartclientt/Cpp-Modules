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
}

void	Zombie::setname(std::string name)
{
	_name = name;
}