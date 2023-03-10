#ifndef PHONEBOOK_HPP
#define PHONEBOOK_HPP

#include "Contact.hpp"

class PhoneBook{
	private:
		Contact _contacts[8];

	public:
		PhoneBook();
		~PhoneBook();
		void welcome( void );
		void addContact( void );
		int showContacts( void );
		void searchContact( void ) const;
};

#endif