#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

std::string	Contact::_getInput(std::string str)
{
	std::string input = "";
	bool	valid = false;

	while (!valid)
	{
		std::cout << str;
		std::getline(std::cin, input);
		if (!input.empty())
			valid = true;
		else
		{
			std::cin.clear();
			std::cout << "Input cannot be left blank; Please try again" << std::endl;
		}
	}
	return (input);
}

std::string	Contact::_trunc(std::string str)
{
	if (str.length() > 10)
		return str.substr(0, 9) + ".";
	return str;
}

void	Contact::saveContact( void )
{
	std::cin.ignore();
	this->_firstName = this->_getInput("First Name:\t");
	this->_lastName = this->_getInput("Last Name:\t");
	this->_nickname = this->_getInput("Nickname:\t");
	this->_phoneNumber = this->_getInput("Phone Number:\t");
	this->_darkestSecret = this->_getInput("Darkest Secret:\t");
	std::cout << std::endl;

	std::cout << "[" << this->_firstName << "]" << std::endl;
	std::cout << "[" << this->_lastName << "]" << std::endl;
	std::cout << "[" << this->_nickname << "]" << std::endl;
	std::cout << "[" << this->_phoneNumber << "]" << std::endl;
	std::cout << "[" << this->_darkestSecret << "]" << std::endl;
}

void	Contact::setIndex( int i )
{
	this->_index = i;
	std::cout << "[" << this->_index << "]" << std::endl;
}

void	Contact::printContact( int i )
{
	if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
		return ;
	std::cout << "|" << std::setw(10) << i << std::flush;
	std::cout << "|" << std::setw(10) << this->_trunc(this->_firstName) << std::flush;
	std::cout << "|" << std::setw(10) << this->_trunc(this->_lastName) << std::flush;
	std::cout << "|" << std::setw(10) << this->_trunc(this->_nickname) << std::flush;
	std::cout << "|" << std::endl;
}