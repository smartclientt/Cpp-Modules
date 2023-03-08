#include "Dog.hpp"

// member functions
void	Dog::makeSound() const
{
	std::cout << _type << " Animal Sound is : " << "HawHaw" << std::endl;
}


// constructor and destructor
Dog::Dog(): Animal("Dog")
{
	std::cout << "Dog Constructor" << std::endl;
	_brain = new Brain();
}

Dog::Dog(const Dog& dog)
{
	std::cout << "Dog Copy Constructor" << std::endl;
	(*this) = dog;
}

Dog& Dog::operator=(const Dog& dog)
{
	std::cout << "Dog Assignement Constructor" << std::endl;
	_type = dog._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
	delete _brain;
}