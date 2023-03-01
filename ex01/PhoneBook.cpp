#include "PhoneBook.hpp"

PhoneBook::PhoneBook() {}
PhoneBook::~PhoneBook() {}

void	PhoneBook::welcome(void)
{
	std::cout << std::endl;
	std::cout << "Welcome to your PhoneBook! Please input a command:" << std::endl;
	std::cout << std::endl;
	std::cout << "[ ADD ]\tAdd a new contact" << std::endl;
	std::cout << "[ SEARCH ]\tSearch for an existing contact" << std::endl;
	std::cout << "[ EXIT ]\tExit PhoneBook. \033[1mWARNING: Exiting the PhoneBook will delete all existing contacts\033[0m"
			<< std::endl;
	std::cout << std::endl;
}