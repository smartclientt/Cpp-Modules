#pragma once

#include "WrongAnimal.hpp"

class WrongCat: public WrongAnimal
{
	public :
		WrongCat();
		WrongCat(const WrongCat& wrongcat);
		WrongCat& operator=(const WrongCat& wrongcat);
		virtual ~WrongCat();

		void	makeSound() const;
	private :
};