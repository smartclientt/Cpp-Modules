#include "PhoneBook.hpp"

int main()
{
	std::string cmd;
	int			i;
	PhoneBook	ph_book;

	i = 0;
	while(1)
	{
		std::cout << "Enter Command : ";
		if (!getline(std::cin, cmd)) // need more understanding
			exit(0);
		else if (cmd == "ADD")
		{
			ph_book.add_contact(i);
			i++;
		}
		else if (cmd == "SEARCH")
			ph_book.search_contact(i);
		else if (cmd == "EXIT")
			ph_book.exit_program();
		else
			std::cout << "Use one of this cmds : ADD, SEARCH, EXIT" << std::endl;
	}
	return 0;
}

