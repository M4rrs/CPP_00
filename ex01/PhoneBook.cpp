#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}
PhoneBook::~PhoneBook() {}


void	PhoneBook::welcome( void )
{
	std::cout << std::endl;
	std::cout << "Welcome to your PhoneBook! Please input a command:" << std::endl;
	std::cout << std::endl;
	std::cout << "[ ADD ]\t\tAdd a new contact" << std::endl;
	std::cout << "[ SEARCH ]\tSearch for an existing contact" << std::endl;
	std::cout << "[ EXIT ]\tExit PhoneBook. \033[38;5;1mWARNING: Exiting the PhoneBook will delete all existing contacts\033[0m"
			<< std::endl;
	std::cout << std::endl;
}

void	PhoneBook::addContact( void )
{
	static int i;

	this->_contacts[i % 8].saveContact();
	this->_contacts[i % 8].setIndex(i % 8);
	i++;
}

void	PhoneBook::showContacts( void )
{
	std::cout << "Your Contacts:" << std::endl;
	for (int i = 0; i < 8; i++)
		this->_contacts[i].printContact(i);
	std::cout << std::endl;
}

int	readInput( void )
{
	int i = 0;
	bool valid = false;
	while (!valid)
	{
		std::cout << "Enter contact index:\t";
		std::cin >> i;
		if (i >= 1 && i <= 8)
			valid = true;
		else
		{
			std::cin.clear();
			std::cout << "Invalid index; Please try again." << std::endl;
		}
	}
	return i;
}

// void	PhoneBook::searchContact( void )
// {
// 	int i = readInput();
// 	this->_contacts[i].displayContact(i);
// }