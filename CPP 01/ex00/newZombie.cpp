#include "Zombie.hpp"

Zombie* newZombie(std::string name)
{
	Zombie *zmb1 = new Zombie(name);

	return (zmb1);
}