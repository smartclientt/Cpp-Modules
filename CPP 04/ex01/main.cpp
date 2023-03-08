#include "Dog.hpp"
#include "Cat.hpp"
#include "WrongCat.hpp"


void	Zoo()
{
	Animal *animal[10];

	for(int i = 0; i < 5; i++)
		animal[i] = new Dog();
	for(int i = 5; i < 10; i++)
		animal[i] = new Cat();

	for(int i = 0; i < 5; i++)
		animal[i]->makeSound();
	for(int i = 5; i < 10; i++)
		animal[i]->makeSound();
	for(int i = 0; i < 10; i++)
		delete animal[i];

	// Dog x;
	// {
	// 	Dog y = x;
	// 	Dog s;
	// 	s = x;
	// 	std::cout << "***************" << x.getType() << std::endl;
	// 	std::cout << "***************" << y.getType() << std::endl;
	// }
}

int main()
{
	
	Zoo();

	
	system("leaks OnFire");
	return 0;
}
