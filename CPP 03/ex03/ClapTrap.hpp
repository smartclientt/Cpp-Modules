#pragma once

#include <iostream>

class ClapTrap
{
	public :
		ClapTrap();
		ClapTrap(const std::string name);
		ClapTrap(const std::string name, int hit, int energy, int damage);
		ClapTrap& operator=(const ClapTrap& clap);
		ClapTrap(const ClapTrap& calp);
		~ClapTrap();

		void	attack(const std::string& target);
		void	takeDamage(unsigned int amount);
		void	beRepaired(unsigned int amount);
	protected :
		std::string _name;
		int			_hit;
		int			_energy;
		int			_damage;
};