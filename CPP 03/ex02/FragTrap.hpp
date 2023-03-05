#pragma once

#include "ClapTrap.hpp"

class FragTrap: public ClapTrap
{
	public :
		FragTrap();
		FragTrap(std::string name);
		FragTrap(const FragTrap& frag);
		FragTrap& operator= (const FragTrap& frag);
		~FragTrap();

		void	highFivesGuy();
	private :
};