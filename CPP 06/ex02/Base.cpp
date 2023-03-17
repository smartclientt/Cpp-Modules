#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base::~Base()
{
}

Base*	generate()
{
	srand(time(NULL));
	int r = rand();
	switch (r % 3)
	{
		case 0:
			return (new A());
		case 1:
			return (new B());
		case 2:
			return (new C());
		default:
			break;
	}
	return (NULL);
}

void	identify(Base* p)
{
	if (dynamic_cast<A*>(p) != NULL)
		std::cout << "Pointer Type is : A" << std::endl;
	else if (dynamic_cast<B*>(p) != NULL)
		std::cout << "Pointer Type is : B" << std::endl;
	else if (dynamic_cast<C*>(p) != NULL)
		std::cout << "Pointer Type is : C" << std::endl;
	else
		std::cout << "This is not a direved Class" << std::endl;
	delete p;
}

void	identify(Base& p)
{
	try
	{
		Base b1 = dynamic_cast<A&>(p);
		std::cout << "Pointer Type is : A" << std::endl;
		return ;
	}
	catch (std::bad_cast& exp)
	{
		try
		{
			Base b2 = dynamic_cast<B&>(p);
			std::cout << "Pointer Type is : B" << std::endl;
			return ;
		}
		catch (std::bad_cast& exp)
		{
			try
			{
				Base b3 = dynamic_cast<C&>(p);
				std::cout << "Pointer Type is : C" << std::endl;
				return ;
			}
			catch (std::bad_cast& exp)
			{
				std::cout << exp.what() << std::endl;
				return ;
			}
			std::cout << exp.what() << std::endl;
			return ;
		}
		std::cout << exp.what() << std::endl;
		return ;
	}
}
