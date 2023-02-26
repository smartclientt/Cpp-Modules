#ifndef __WEAPON__
#define	__WEAPON__

#include <iostream>

class	Weapon
{
	public :
		Weapon();
		Weapon(std::string type);
		~Weapon();

		const std::string	&getType();
		void				setType(std::string type);
	private :
		std::string	_type;
};


#endif