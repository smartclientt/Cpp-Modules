#include "Dog.hpp"

// member functions
void	Dog::makeSound() const
{
	std::cout << _type << " Animal Sound is : " << "HawHaw" << std::endl;
}


// constructor and destructor
Dog::Dog(): Animal("Dog"), _brain(new Brain())
{
	std::cout << "Dog Constructor" << std::endl;
}

Dog::Dog(const Dog& dog): Animal("Dog"), _brain(new Brain())
{
	std::cout << "Dog Copy Constructor" << std::endl;
	(*this) = dog;
}

Dog& Dog::operator=(const Dog& dog)
{
	std::cout << "Dog Assignement Constructor" << std::endl;
	if (_brain = NULL)
		_brain = new Brain();
	*(_brain) = *(dog._brain);
	_type = dog._type;
	return (*this);
}

Dog::~Dog()
{
	std::cout << "Dog Destructor" << std::endl;
	delete _brain;
}
