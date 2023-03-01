#include "PhoneBook.hpp"

int main( void )
{
	PhoneBook phone;

	std::string input = NULL; //to store input from cin
	phone.welcome();
	while (input.compare("EXIT"))
	{
		if (input.compare("ADD"))
		{
		
		}
		else if (input.compare("SEARCH"))
		{

		}
		std::cout << "> ";
		std::cin >> input;

	}

	return (0);
}