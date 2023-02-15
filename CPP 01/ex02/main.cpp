#include <iostream>


int main(int ac, char **av)
{
	(void)av;
	std::string str = "HI THIS IS BRAIN";
	std::string *str_ptr = &str;
	std::string &str_ref = str;

	if (ac == 1)
	{
		std::cout << "print addresses" << std::endl;
		std::cout << "str = " << &str << std::endl;
		std::cout << "str_ptr = " << str_ptr << std::endl;
		std::cout << "str_ref = " << &str_ref << std::endl;

		std::cout << "print values" << std::endl;
		std::cout << "str = " << str << std::endl;
		std::cout << "str_ptr = " << *str_ptr << std::endl;
		std::cout << "str_ref = " << str_ref << std::endl;
	}
	return (0);
}

