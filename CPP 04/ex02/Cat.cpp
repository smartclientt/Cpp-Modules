#include "Cat.hpp"

// member functions
void	Cat::makeSound() const
{
	std::cout << _type << " Animal Sound is : " << "Moeeeeeeew" << std::endl;
}

// constructor and destructor
Cat::Cat(): Animal("Cat"), _brain(new Brain())
{
	std::cout << "Cat Constructor" << std::endl;
	
}

Cat::Cat(const Cat& cat): Animal("Cat"), _brain(new Brain())
{
	std::cout << "Cat Copy Constructor" << std::endl;
	(*this) = cat;
}

Cat& Cat::operator=(const Cat& cat)
{
	std::cout << "Cat Assignement Constructor" << std::endl;
	if (_brain == NULL)
		_brain = new Brain();
	*(_brain) = *(cat._brain);
	_type = cat._type;
	return (*this);
}

Cat::~Cat()
{
	std::cout << "Cat Destructor" << std::endl;
	delete _brain;
}