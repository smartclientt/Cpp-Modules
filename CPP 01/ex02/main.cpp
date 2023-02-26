#include <iostream>


int main()
{
	std::string str;
	std::string *str_ptr = &str;
	std::string &str_ref = str;

	std::cout << "print addresses" << std::endl;
	std::cout << "str = " << &str << std::endl;
	std::cout << "str_ptr = " << str_ptr << std::endl;
	std::cout << "str_ref = " << &str_ref << std::endl;

	str = "ha how khraj 3awtani";
	std::cout << "print values" << std::endl;
	std::cout << "str = " << str << std::endl;
	std::cout << "str_ptr = " << *str_ptr << std::endl;
	std::cout << "str_ref = " << str_ref << std::endl;
	return (0);
}

