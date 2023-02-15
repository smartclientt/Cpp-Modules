#include "Zombie.hpp"

int main(int ac, char **av)
{
	(void)av;
	Zombie	zmb;
	Zombie*	zmbp = NULL;
	int		n = 5;

	if (ac == 1)
	{
		zmbp = zmb.zombieHorde(n, "saad");
		for (int i = 0; i < n; i++)
			zmbp[i].announce();
	}
	delete [] zmbp;
	return (0);
}