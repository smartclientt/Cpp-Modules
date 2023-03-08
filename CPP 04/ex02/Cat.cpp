#include "Cat.hpp"

// member functions
void	Cat::makeSound() const
{
	std::cout << _type << " Animal Sound is : " << "Moeeeeeeew" << std::endl;
}

// constructor and destructor
Cat::Cat(): Animal("Cat")
{
	std::cout << "Cat Constructor" << std::endl;
	_brain = new Brain();
}

Cat::Cat(const Cat& cat)
{
	std::cout << "Cat Copy Constructor" << std::endl;
	(*this) = cat;
}

Cat& Cat::operator=(const Cat& cat)
{
	std::cout << "Cat Assignement Constructor" << std::endl;
	_type = cat._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor" << std::endl;
	delete _brain;
}