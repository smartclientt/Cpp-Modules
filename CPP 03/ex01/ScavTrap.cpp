#include "ScavTrap.hpp"


void	ScavTrap::attack(const std::string& target)
{
	if (_energy <= 0 || _hit <= 0)
		return;
	_energy--;
	std::cout << "ScavTrap " << _name << " attacks " << target;
	std::cout << ", causing " << _damage << " point of damage!" << std::endl;
}

void	ScavTrap::guardGate()
{
	std::cout << "ScavTrap is now in Gate keeper mode" << std::endl;
}

// Canonical Form
ScavTrap::ScavTrap()
{
	std::cout << "ScavTrap Default Constractor is called" << std::endl;
}

ScavTrap::ScavTrap(std::string name): ClapTrap(name, 100, 50, 20)
{
	std::cout << "ScavTrap Parametter Constractor is called" << std::endl;
}

ScavTrap::ScavTrap(const ScavTrap& scav)
{
	std::cout << "ScavTrap Copy Constractor is called" << std::endl;
	(*this) = scav;
}

ScavTrap& ScavTrap::operator=(const ScavTrap& scav)
{
	std::cout << "ScavTrap Assignement Constractor is called" << std::endl;
	_name = scav._name;
	_hit = scav._hit;
	_energy = scav._energy;
	_damage = scav._damage;
	return (*this);
}

ScavTrap::~ScavTrap()
{
	std::cout << "ScavTrapDestructor is called" << std::endl;
}
