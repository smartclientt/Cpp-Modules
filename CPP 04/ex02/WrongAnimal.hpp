#pragma once
#include <iostream>

class WrongAnimal
{
	public :
		WrongAnimal();
		WrongAnimal(const std::string type);
		WrongAnimal(const WrongAnimal& wrongAnimal);
		WrongAnimal& operator=(const WrongAnimal& wrongAnimal);
		virtual ~WrongAnimal();

		void	makeSound() const;

		const std::string	getType() const;
	protected :
		std::string	_type;
};