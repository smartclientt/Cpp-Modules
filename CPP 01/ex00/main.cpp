#include "Zombie.hpp"

int main()
{
	Zombie zmb("Foo");
	Zombie *zmb1;

	zmb.announce();
	zmb1 = newZombie("ZMB_1");
	zmb1->announce();
	delete zmb1;
	randomChump("ZMB_2");
	return (0);
}
