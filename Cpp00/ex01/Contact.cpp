#include "Contact.hpp"

Contact::Contact(void)
{
}

Contact::~Contact(void)
{
}

std::string	Contact::my_empty(std::string msg)
{
	std::string str;

	do
	{
		std::cout << msg;
		if(!getline(std::cin, str))
			break;
	} 
	while (str.empty());
	if (str.empty())
		exit(0);
	return (str);
}

Contact	Contact::create_contact(void)
{
	Contact new_contact;

	new_contact.firstName = my_empty("enter ur first name: ");
	new_contact.lastName = my_empty("enter ur last name: ");
	new_contact.nickName = my_empty("enter ur nick name: ");
	new_contact.phoneNbr = my_empty("enter ur phone nbr: ");
	new_contact.darkest = my_empty("enter ur darkest secret: ");

	return (new_contact);
}

std::string	Contact::getFirstName(void)
{
	return firstName;
}

std::string	Contact::getLastName(void)
{
	return lastName;
}

std::string	Contact::getNickName(void)
{
	return nickName;
}

std::string	Contact::getPhoneNbr(void)
{
	return phoneNbr;
}

std::string	Contact::getDarkest(void)
{
	return darkest;
}
