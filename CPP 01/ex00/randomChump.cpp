#include "Zombie.hpp"

void Zombie::randomChump(std::string name)
{
	Zombie zmb(name);

	zmb.announce();
}
