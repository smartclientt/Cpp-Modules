#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Dog: public Animal
{
	public :
		Dog();
		Dog(const Dog& dog);
		Dog& operator=(const Dog& dog);
		~Dog();

		void	makeSound() const;
	private :
		Brain		*_brain;
};