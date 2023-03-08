#pragma once

#include <iostream>

class Brain
{
	public :
		Brain();
		Brain(const Brain& brain);
		Brain& operator=(const Brain& brain);
		~Brain();

	private :
		std::string	_ideas[100];
};
