#ifndef __PHONE_BOOK__
#define __PHONE_BOOK__

#include <iostream>
#include <iomanip>
#include <cctype>
#include "Contact.hpp"

class PhoneBook{
	// private :
	public :
		Contact contact[8];
		PhoneBook(void);
		~PhoneBook(void);

		Contact	*getContact();

		void	add_contact(int	index);
		void	search_contact(int nbr_contact);
		void	exit_program(void);
		void	print_column(std::string str);
};

#endif