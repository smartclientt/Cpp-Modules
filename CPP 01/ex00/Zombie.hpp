#ifndef __ZOMBIE__
#define __ZOMBIE__

#include <iostream>
#include <string>

class	Zombie
{
	public:
		Zombie(void);
		Zombie(std::string name);
		~Zombie(void);

		void	announce(void);
	private:
		std::string	_name;
};

Zombie* newZombie(std::string name);
void	randomChump(std::string name);

#endif