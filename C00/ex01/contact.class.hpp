#pragma once

#include <string>

class Contact
{
	private:
		std::string	_firstName;
		std::string	_lastName;
		std::string	_nickname;
		std::string	_phoneNumber;
		std::string	_darkestSecret;
		int			_index;
	public:
		Contact( void );
		Contact( std::string firstName, std::string lastName, std::string nickname,
			 std::string phoneNumber, std::string darkestSecret, int index );
		int getIndex( void ) const;
		std::string getFirstName( void ) const;
		std::string getLastName( void ) const;
		std::string getNickname( void ) const;
		std::string getPhoneNumber( void ) const;
		std::string getDarkestSecret( void ) const;
		~Contact( void );
};
