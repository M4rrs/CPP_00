#ifndef CONTACT_HPP
#define CONTACT_HPP

# include <iostream>
# include <iomanip>

class Contact {
	private:
		std::string _firstName;
		std::string _lastName;
		std::string _nickname;
		std::string _phoneNumber;
		std::string _darkestSecret;
		int _index;

	public:
		Contact();
		~Contact();
		void	saveContact( void );
		void	setIndex( int i );
		void	printContact( void );
};

#endif