#ifndef __HUMAN_A__
#define	__HUMAN_A__

#include "Weapon.hpp"

class	HumanA
{
	public :
		HumanA(std::string name ,Weapon& weapon);
		~HumanA();

		void	attack();
	private :
		std::string _name;
		Weapon&		_weapon;
};


#endif