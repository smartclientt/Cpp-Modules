#include "Zombie.hpp"

int main()
{
	int		n = 5;

	Zombie*	zmbp = zombieHorde(n, "saad");
	for (int i = 0; i < n; i++)
		zmbp[i].announce();

	delete [] zmbp;
	return (0);
}