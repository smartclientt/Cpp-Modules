#pragma once

#include "Animal.hpp"
#include "Brain.hpp"

class Cat: public Animal
{
	public :
		Cat();
		Cat(const Cat& cat);
		Cat& operator=(const Cat& cat);
		~Cat();

		void	makeSound() const;
	private :
		Brain		*_brain;
};