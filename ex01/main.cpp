#include "PhoneBook.hpp"

int main( void )
{
	PhoneBook phone;

	std::string input = ""; //to store input from cin
	phone.welcome();
	while (input.compare("EXIT"))
	{
		if (!input.compare("ADD"))
			phone.addContact();
		else if (!input.compare("SEARCH"))
		{
			if (!phone.showContacts())
				phone.searchContact();	
		}
		std::cout << "> ";
		std::cin >> input;
	}

	return (0);
}