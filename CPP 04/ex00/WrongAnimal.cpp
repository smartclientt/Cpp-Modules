#include "WrongAnimal.hpp"

// member functions
void	WrongAnimal::makeSound() const
{
	std::cout << _type << " WrongAnimal Sound is : " << "*****" << std::endl;
}

// getters
const std::string	WrongAnimal::getType() const
{
	return (_type);
}

// constructor and destructor
WrongAnimal::WrongAnimal(): _type("Random")
{
	std::cout << "WrongAnimal Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const std::string type): _type(type)
{
	std::cout << "WrongAnimal Parametter Constructor" << std::endl;
}

WrongAnimal::WrongAnimal(const WrongAnimal& wrongAnimal)
{
	std::cout << "WrongAnimal Copy Constructor" << std::endl;
	(*this) = wrongAnimal;
}

WrongAnimal& WrongAnimal::operator=(const WrongAnimal& wrongAnimal)
{
	std::cout << "WrongAnimal Assignement Constructor" << std::endl;
	_type = wrongAnimal._type;
	return (*this);
}

WrongAnimal::~WrongAnimal()
{
	std::cout << "WrongAnimal Destructor" << std::endl;
}