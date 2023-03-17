#pragma once

#include <iostream>
#include <string>
#include <cstdlib>
#include <exception>

class Base
{
	public :
		virtual ~Base();
};

Base*	generate();
void	identify(Base* p);
void	identify(Base& p);
