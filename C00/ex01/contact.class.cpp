#include "contact.class.hpp"

Contact::Contact( void )
{
	return ;
}

Contact::Contact( std::string firstName, std::string lastName, std::string nickname,
		  std::string phoneNumber, std::string darkestSecret, int index ) : _firstName(firstName) , _lastName(lastName) ,
								         _nickname(nickname) , _phoneNumber(phoneNumber) ,
									 _darkestSecret(darkestSecret) , _index(index)
{
	return ;
}

int Contact::getIndex( void ) const 
{
	return this->_index;
}

std::string Contact::getFirstName( void ) const
{
	return this->_firstName;
}

std::string Contact::getLastName( void ) const
{
	return this->_lastName;
}

std::string Contact::getNickname( void ) const
{
	return this->_nickname;
}

std::string Contact::getPhoneNumber( void ) const
{
	return this->_phoneNumber;
}

std::string Contact::getDarkestSecret( void ) const
{
	return this->_darkestSecret;
}

Contact::~Contact( void )
{
	this->_firstName = "";
	this->_lastName = "";
	this->_nickname = "";
	this->_phoneNumber = "";
	this->_darkestSecret = "";
	this->_index = -1;
}
