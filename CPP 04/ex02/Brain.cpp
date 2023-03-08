#include "Brain.hpp"

// 

// Constructor and Destructor
Brain::Brain()
{
	std::cout << "Brain Constructor" << std::endl;
}
Brain::Brain(const Brain& brain)
{
	std::cout << "Brain Copy Constructor" << std::endl;
	(*this) = brain;
}
Brain& Brain::operator=(const Brain& brain)
{
	std::cout << "Brain Assingnement Constructor" << std::endl;
	for(int i = 0; i < 100; i++)
		_ideas[i] =  brain._ideas[i];
	return (*this);
}
Brain::~Brain()
{
	std::cout << "Brain Destructor" << std::endl;
}