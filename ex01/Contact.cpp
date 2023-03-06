#include "Contact.hpp"

Contact::Contact() {}
Contact::~Contact() {}

/*============	 PRIVATE	============*/
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

/*============	 PUBLIC	============*/
void	Contact::saveContact( void )
{
	this->_firstName = this->_getInput("First Name:\t");
	this->_lastName = this->_getInput("Last Name:\t");
	this->_nickname = this->_getInput("Nickname:\t");
	this->_phoneNumber = this->_getInput("Phone Number:\t");
	this->_darkestSecret = this->_getInput("Darkest Secret:\t");
	std::cout << std::endl;
}

void	Contact::setIndex( int i )
{
	this->_index = i + 1;
}

void	Contact::printContact( void )
{
	if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
		return ;
	std::cout << "|" << std::setw(10) << this->_index << std::flush;
	std::cout << "|" << std::setw(10) << this->_trunc(this->_firstName) << std::flush;
	std::cout << "|" << std::setw(10) << this->_trunc(this->_lastName) << std::flush;
	std::cout << "|" << std::setw(10) << this->_trunc(this->_nickname) << std::flush;
	std::cout << "|" << std::endl;
}

int	Contact::isEmpty( void )
{
	if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
		return (1);
	return (0);
}

void	Contact::displayContact( void ) const
{
	if (this->_firstName.empty() || this->_lastName.empty() || this->_nickname.empty())
	{
		std::cout << "\n\tCONTACT UNAVAILABLE\t\n" << std::endl;
		return ;
	}
	std::cout << "==========\tCONTACT " << this->_index << "\t==========\n" << std::flush;
	std::cout << std::left << std::setw(15) << "First Name" << ":\t" << this->_firstName << std::flush;
	std::cout << std::endl;
	std::cout << std::left << std::setw(15) << "Last Name" << ":\t" << this->_lastName << std::flush;
	std::cout << std::endl;
	std::cout << std::left << std::setw(15) << "Nickname" << ":\t" << this->_nickname << std::flush;
	std::cout << std::endl;
	std::cout << std::left << std::setw(15) << "Phone Number" << ":\t" << this->_phoneNumber << std::flush;
	std::cout << std::endl;
}
