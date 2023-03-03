#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}
PhoneBook::~PhoneBook() {}

/*============	 PUBLIC	============*/
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

int	PhoneBook::showContacts( void )
{
	std::cout << "Your Contacts:" << std::endl;
	if (this->_contacts[0].isEmpty())
	{
		std::cout << "\n\tNO SAVED CONTACTS\t\n" << std::endl;
		return (1);
	}
	for (int i = 0; i < 8; i++)
		this->_contacts[i].printContact();
	std::cout << std::endl;
	return (0);
}

int	readInput( void )
{
	int i;
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
	return (i);
}

void	PhoneBook::searchContact( void ) const
{
	int i = readInput();
	this->_contacts[i - 1].displayContact();
}