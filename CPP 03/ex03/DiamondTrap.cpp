#include "DiamondTrap.hpp"

int		DiamondTrap::getHit() const
{
	return _hit;
}

int		DiamondTrap::getEnergy() const
{
	return _energy;
}

int		DiamondTrap::getDamage() const
{
	return _damage;
}

void	DiamondTrap::attack(const std::string& target)
{
	ClapTrap::attack(target);
}

void	DiamondTrap::whoAmI()
{
	std::cout << "Diamond name is : " << _name << std::endl;
	std::cout << "ClapTrap name is : " << ClapTrap::_name << std::endl;
}

// Canonical Forme
DiamondTrap::DiamondTrap()
{
	std::cout << "DiamondTrap Default Constructor" << std::endl;
}

DiamondTrap::DiamondTrap(std::string name): ClapTrap(name + "_calp_name"), _name(name)
{
	std::cout << "DiamondTrap Parameter Constructor" << std::endl;
}

DiamondTrap& DiamondTrap::operator=(const DiamondTrap& diamond)
{
	std::cout << "DiamondTrap Assingement Constructor" << std::endl;
	_name = diamond._name;
	ClapTrap::_name = diamond._name + "_clap_name";
	_hit = diamond._hit;
	_energy = diamond._energy;
	_damage = diamond._damage;
	return (*this);
}

DiamondTrap::DiamondTrap(const DiamondTrap& diamond)
{
	std::cout << "DiamondTrap Copy Constructor" << std::endl;
	(*this) = diamond;
}

DiamondTrap::~DiamondTrap()
{
	std::cout << "DiamondTrap Destructor" << std::endl;
}