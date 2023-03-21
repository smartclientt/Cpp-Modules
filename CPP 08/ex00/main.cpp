#include "easyfind.hpp"

int main( void )
{
	try
	{
		std::vector<int> v1;

		v1.push_back(100);
		srand(time(NULL));
		for(int i = 0; i < 5; i++)
			v1.push_back(rand());
		for(std::vector<int>::iterator i = begin(v1); i < end(v1); i++)
			std::cout << *(i.base()) << std::endl;

		std::cout << "easyfind() get : " << *(easyfind(v1, 100)) << std::endl;
	}
	catch (std::exception& exp)
	{
		std::cout << exp.what() << std::endl;
	}

	return 0;
}