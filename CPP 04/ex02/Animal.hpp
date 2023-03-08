#pragma once

#include <iostream>

class Animal
{
	public :
		Animal();
		Animal(const std::string type);
		Animal(const Animal& animal);
		Animal& operator=(const Animal& animal);
		virtual ~Animal() = 0;

		virtual void	makeSound() const = 0;

		const std::string	getType() const;
	protected :
		std::string	_type;
};