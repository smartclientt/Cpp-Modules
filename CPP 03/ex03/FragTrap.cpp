#include "FragTrap.hpp"


void	FragTrap::highFivesGuy()
{
	std::cout << "High fives request" << std::endl;
}

// Canonical Form
FragTrap::FragTrap()
{
	std::cout << "FragTrap Default Constractor is called" << std::endl;
	_hit = 100;
	_damage = 30;
}

FragTrap::FragTrap(std::string name): ClapTrap(name, 100, 100, 30)
{
	std::cout << "FragTrap Parameter Constractor is called" << std::endl;
}

FragTrap::FragTrap(const FragTrap& scav)
{
	std::cout << "FragTrap Copy Constractor is called" << std::endl;
	(*this) = scav;
}

FragTrap& FragTrap::operator=(const FragTrap& scav)
{
	std::cout << "FragTrap Assignement Constractor is called" << std::endl;
	_name = scav._name;
	_hit = scav._hit;
	_energy = scav._energy;
	_damage = scav._damage;
	return (*this);
}

FragTrap::~FragTrap()
{
	std::cout << "FragTrap Destructor is called" << std::endl;
}