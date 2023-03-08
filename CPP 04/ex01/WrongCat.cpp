#include "WrongCat.hpp"

// member functions
void	WrongCat::makeSound() const
{
	std::cout << _type << " WrongAnimal Sound is : " << "Moeeeeeeew" << std::endl;
}

// constructor and destructor
WrongCat::WrongCat(): WrongAnimal("WrongCat")
{
	std::cout << "WrongCat Constructor" << std::endl;
}

WrongCat::WrongCat(const WrongCat& wrongcat)
{
	std::cout << "WrongCat Copy Constructor" << std::endl;
	(*this) = wrongcat;
}

WrongCat& WrongCat::operator=(const WrongCat& wrongcat)
{
	std::cout << "WrongCat Assignement Constructor" << std::endl;
	_type = wrongcat._type;
	return (*this);
}

WrongCat::~WrongCat()
{
	std::cout << "WrongCat Destructor" << std::endl;
}