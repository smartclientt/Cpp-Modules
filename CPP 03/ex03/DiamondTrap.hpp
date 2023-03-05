#pragma once

#include "ScavTrap.hpp"
#include "FragTrap.hpp"

class	DiamondTrap: public FragTrap, public ScavTrap
{
	public :
		DiamondTrap();
		DiamondTrap(std::string name);
		DiamondTrap(const DiamondTrap& diamond);
		DiamondTrap& operator=(const DiamondTrap& diamond);
		~DiamondTrap();


		int		getHit() const;
		int		getEnergy() const;
		int		getDamage() const;

		void	attack(const std::string& target);
		void	whoAmI();
	private :
		std::string	_name;
};