#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

std::string	getInput(std::string str)
{
	std::string input = "";
	bool	valid = false;

	while (!valid)
	{
		std::cout << str;
		std::cin >> input;
		if (std::cin.good() && !input.empty())
			valid = true;
		else
		{
			std::cin.clear();
			std::cout << "Input cannot be left blank; Please try again" << std::endl;
		}
	}
	return (input);
}

std::string	trunc(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void	Contact::saveContact( void )
{
	this->_firstName = getInput("First Name:\t");
	this->_lastName = getInput("Last Name:\t");
	this->_nickname = getInput("Nickname:\t");
	this->_phoneNumber = getInput("Phone Number:\t");
	this->_darkestSecret = getInput("Darkest Secret:\t");
	std::cout << std::endl;
}

void	Contact::setIndex( int i )
{
	this->_index = i + 1;
}

void	Contact::printContact( void )
{
	std::cout << "|" << std::setw(10) << this->_index << std::flush;
	std::cout << "|" << std::setw(10) << trunc(this->_firstName) << std::flush;
	std::cout << "|" << std::setw(10) << trunc(this->_lastName) << std::flush;
	std::cout << "|" << std::setw(10) << trunc(this->_nickname) << std::flush;
	std::cout << "|" << std::setw(10) << trunc(this->_phoneNumber) << std::flush;
	std::cout << std::endl;
}

void	Contact::displayContact( int i )
{
	std::cout << std::endl;
	std::cout << "========== CONTACT " << i << " ==========" << std::flush;
	std::cout << std::endl; 
	std::cout << std::left << std::setw(10) << "First Name:" << std::endl;
}