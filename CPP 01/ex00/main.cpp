#include "Zombie.hpp"

int main(int ac, char **av)
{
	(void)av;
	Zombie zmb("Foo");
	Zombie *zmb1;
	Zombie zmb2;

	if (ac == 1)
	{
		zmb.announce();
		zmb1 = zmb.newZombie("ZMB_1");
		zmb1->announce();
		zmb2.randomChump("ZMB_2");
		delete zmb1;
	}
	return (0);
}
