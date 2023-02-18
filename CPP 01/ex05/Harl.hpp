#ifndef __HARL__
#define	__HARL__

#include <iostream>
#include <string>

class Harl
{
	public:
		Harl();
		~Harl();

		void	debug(void);
		void	info(void);
		void	warning(void);
		void	error(void);
		void	complain(std::string level);
};


#endif