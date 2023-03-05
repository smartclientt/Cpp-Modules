#pragma once

#include "ClapTrap.hpp"

class ScavTrap: virtual public ClapTrap
{
	public :
		ScavTrap();
		ScavTrap(std::string name);
		ScavTrap(const ScavTrap& scav);
		ScavTrap& operator= (const ScavTrap& scav);
		~ScavTrap();

		void	attack(const std::string& target);
		void	guardGate();
	private :
};
