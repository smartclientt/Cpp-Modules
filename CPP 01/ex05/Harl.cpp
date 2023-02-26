#include "Harl.hpp"

void	Harl::complain(std::string level)
{
	std::string word[] = {"DEBUG", "INFO", "WARNING", "ERROR"};

	void (Harl::*func[])() = {&Harl::debug, &Harl::info, &Harl::warning, &Harl::error};

	for(int i = 0; i < 4; i++)
	{
		if(word[i] == level)
			(this->*func[i])();
	}
}

void	Harl::debug(void)
{
	std::cout << "Welcome to Debug area" << std::endl;
}
void	Harl::info(void)
{
	std::cout << "Welcome to Info area" << std::endl;
}
void	Harl::warning(void)
{
	std::cout << "Welcome to Warning area" << std::endl;
}
void	Harl::error(void)
{
	std::cout << "Welcome to Error area" << std::endl;
}

Harl::Harl()
{
}

Harl::~Harl()
{
}
