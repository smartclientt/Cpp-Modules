#include "Animal.hpp"

// getters
const std::string	Animal::getType() const
{
	return (_type);
}

// constructor and destructor
Animal::Animal(): _type("Random")
{
	std::cout << "Animal Constructor" << std::endl;
}

Animal::Animal(const std::string type): _type(type)
{
	std::cout << "Animal Parametter Constructor" << std::endl;
}

Animal::Animal(const Animal& animal)
{
	std::cout << "Animal Copy Constructor" << std::endl;
	(*this) = animal;
}

Animal& Animal::operator=(const Animal& animal)
{
	std::cout << "Animal Assignement Constructor" << std::endl;
	_type = animal._type;
	return (*this);
}

Animal::~Animal()
{
	std::cout << "Animal Destructor" << std::endl;
}