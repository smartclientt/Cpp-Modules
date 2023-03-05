#include "ClapTrap.hpp"

// member functions
void	ClapTrap::attack(const std::string& target)
{
	if (_energy <= 0 || _hit <= 0)
		return;
	_energy--;
	std::cout << "ClapTrap " << _name << " attacks " << target;
	std::cout << ", causing " << _damage << " point of damage!" << std::endl;
}

void	ClapTrap::takeDamage(unsigned int amount)
{
	if (_energy <= 0 || _hit <= 0)
		return;
	_hit -= amount;
	std::cout << "ClapTrap " << _name << " take damage of ";
	std::cout << amount << " point of damage!" << std::endl;
}

void	ClapTrap::beRepaired(unsigned int amount)
{
	if (_energy <= 0 || _hit <= 0)
		return;
	_hit += amount;
	_energy--;
	std::cout << "ClapTrap " << _name << " has being repaired by ";
	std::cout << amount << " Health point!" << std::endl;
}

// Canonical Form
ClapTrap::ClapTrap()
{
	std::cout << "ClapTrap Default Constractor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): _name(name), _hit(10), _energy(10), _damage(0)
{
	std::cout << "ClapTrap Pramettre Constractor is called" << std::endl;
}

ClapTrap::ClapTrap(std::string name, int hit, int energy, int damage): _name(name), _hit(hit), _energy(energy), _damage(damage)
{
	std::cout << "ClapTrap Full Pramettre Constractor is called" << std::endl;
}

ClapTrap::ClapTrap(const ClapTrap& clap)
{
	std::cout << "ClapTrap Copy Constractor is called" << std::endl;
	(*this) = clap;
}

ClapTrap& ClapTrap::operator=(const ClapTrap& clap)
{
	std::cout << "ClapTrap Assignement operation Constractor is called" << std::endl;
	_name = clap._name;
	_hit = clap._hit;
	_energy = clap._energy;
	_damage = clap._damage;
	return (*this);
}

ClapTrap::~ClapTrap()
{
	std::cout << "ClapTrap Destructor is called" << std::endl;
}