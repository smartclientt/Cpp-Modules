#include "PhoneBook.hpp"

PhoneBook::PhoneBook(void)
{
	return;
}

PhoneBook::~PhoneBook(void)
{
	return;
}

Contact	*PhoneBook::getContact()
{
	return (contact);
}


void	PhoneBook::add_contact(int	index)
{	
	Contact c;

	contact[index % 8] = c.create_contact(); 
}

void	PhoneBook::print_column(std::string str)
{
	if (str.length() > 10)
		str.replace(9, 1, ".");
	std::cout << "|" << std::right << std::setw(10) << str.substr(0, 10);
}

void	PhoneBook::search_contact(int nbr_contact)
{
	std::string index;

	if (nbr_contact > 8)
		nbr_contact = 8;
	for(int i = 0; i < nbr_contact; i++)
	{
			std::cout << std::right << std::setw(10) << i + 1;
			print_column(getContact()[i].getFirstName());
			print_column(getContact()[i].getLastName());
			print_column(getContact()[i].getNickName());
			std::cout << std::endl;
	}
	do
	{
		std::cout << "Can u pls enter the index of contact u want: ";
		if(!getline(std::cin, index))
			break;
	} 
	while (index.empty());
	if (index.empty())
		exit(0);
	if (index.length() == 1 && std::isdigit(index[0]) && stoi(index) <= nbr_contact && stoi(index) >= 1)
	{
		std::cout << "first name: " << getContact()[std::stoi(index) - 1].getFirstName() << std::endl;
		std::cout << "last name: " << getContact()[std::stoi(index) - 1].getLastName() << std::endl;
		std::cout << "nick name: " << getContact()[std::stoi(index) - 1].getNickName() << std::endl;
		std::cout << "phone nbr: " << getContact()[std::stoi(index) - 1].getPhoneNbr() << std::endl;
		std::cout << "darkest secret: " << getContact()[std::stoi(index) - 1].getDarkest() << std::endl;
	}
	else
		std::cout << "Input invalid !!" << std::endl;
}

void	PhoneBook::exit_program(void)
{
	exit(0);
}