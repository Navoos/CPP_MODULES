#include "phonebook.class.hpp"

PhoneBook::PhoneBook( void ) : _index(0)
{
	return ;
}

PhoneBook::~PhoneBook( void )
{
	return ;
}

void PhoneBook::add( Contact &contact )
{
	if (PhoneBook::_index >= 8)
		PhoneBook::_index = 7;
	this->_contacts[_index] = contact;
	PhoneBook::_index += 1;
}

void PhoneBook::printUser( void )
{
	int		index;
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;

	for (int i = 0;i < _index;i += 1)
	{
		std::cout << std::setw(10) << std::right << _contacts[i].getIndex() << "|";
		firstName = _contacts[i].getIndex
		if (firstName.size() > 10)
		{
			firstName = firstName.substr(0, 9);
			firstName += ".";
		}
		std::cout << std::setw(10) << std::right << firstName << "|" << std::endl;
	}
	std::cout << "index : ";
	std::cin >> index;
	std::cin.ignore(256, '\n');
	if (index < 0 || index > 7)
	{
		std::cout << "ERROR : Index out of range" << std::endl;
		return ;
	}
}
