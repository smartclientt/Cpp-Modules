#ifndef __HUMAN_B__
#define	__HUMAN_B__

#include "Weapon.hpp"

class	HumanB
{
	public :
		HumanB();
		HumanB(std::string name);
		~HumanB();

		void	attack();
		void	setWeapon(Weapon &weapon);
	private :
		std::string _name;
		Weapon		*_weapon;
};


#endif	