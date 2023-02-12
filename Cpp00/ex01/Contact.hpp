#ifndef __CONTACT__
#define __CONTACT__

#include <iostream>
#include <iomanip>
#include <cctype>

class Contact {
	private :
		std::string	firstName;
		std::string	lastName;
		std::string	nickName;
		std::string	phoneNbr;
		std::string	darkest;
	public :
		Contact(void); //Constructor : initial class data
		~Contact(void); //Destructor

		std::string	getFirstName(void);
		std::string	getLastName(void);
		std::string	getNickName(void);
		std::string	getPhoneNbr(void);
		std::string	getDarkest(void);

		void	setFirstName(std::string firstName);
		void	setLastName(std::string lastName);
		void	setNickName(std::string nickName);
		void	setPhoneNbr(std::string phoneNbr);
		void	setDarkest(std::string darkest);

		Contact	create_contact(void);
		std::string	my_empty(std::string msg);
};


#endif
