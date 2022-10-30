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
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;

	if (_index == 0)
		std::cout << "ERROR : No available users" << std::endl;
	else
	{
		std::cout << std::setw(10) << std::right << "index" << "|";
		std::cout << std::setw(10) << std::right << "first name" << "|";
		std::cout << std::setw(10) << std::right << "last name" << "|";
		std::cout << std::setw(10) << std::right << "nickname" << "|";
		std::cout << std::setw(10) << std::right << "phone number" << "|";
		std::cout << std::setw(10) << std::right << "darkest secret" << "|";
		std::cout << std::endl;
		for (int i = 0;i < _index;i += 1)
		{
			std::cout << std::setw(10) << std::right << _contacts[i].getIndex() << "|";
			firstName = _contacts[i].getFirstName();
			if (firstName.size() > 10)
			{
				firstName = firstName.substr(0, 9);
				firstName += ".";
			}
			std::cout << std::setw(10) << std::right << firstName << "|";
			lastName = _contacts[i].getLastName();
			if (lastName.size() > 10)
			{
				lastName = lastName.substr(0, 9);
				lastName += ".";
			}
			std::cout << std::setw(10) << std::right << lastName << "|";
			nickname = _contacts[i].getNickname();
			if (nickname.size() > 10)
			{
				nickname = nickname.substr(0, 9);
				nickname += ".";
			}
			std::cout << std::setw(10) << std::right << nickname << "|";
			phoneNumber = _contacts[i].getPhoneNumber();
			if (phoneNumber.size() > 10)
			{
				phoneNumber = phoneNumber.substr(0, 9);
				phoneNumber += ".";
			}
			std::cout << std::setw(10) << std::right << phoneNumber << "|";
			darkestSecret = _contacts[i].getDarkestSecret();
			if (darkestSecret.size() > 10)
			{
				darkestSecret = darkestSecret.substr(0, 9);
				darkestSecret += ".";
			}
			std::cout << std::setw(10) << std::right << darkestSecret << "|" << std::endl;

		}

		std::string	index;
		std::cout << "index : ";
		if (!getline(std::cin, index))
			exit(1);
		if (index.size() > 1)
		{
			std::cout << "ERROR : Invalid input" << std::endl;
			return ;
		}
		if (index[0] - 48 < 0 || index[0] - 48 > 7)
		{
			std::cout << "ERROR : Index out of range" << std::endl;
			return ;
		}
		if (index[0] - 48 > _index - 1)
		{
			std::cout << "ERROR : User not found" << std::endl;
			return ;
		}
		std::cout << "first name : " << _contacts[index[0] - 48].getFirstName() << std::endl;
		std::cout << "last name : " << _contacts[index[0] - 48].getLastName() << std::endl;
		std::cout << "nickname : " << _contacts[index[0] - 48].getNickname() << std::endl;
		std::cout << "phone number : " << _contacts[index[0] - 48].getPhoneNumber() << std::endl;
		std::cout << "darkest secret : " << _contacts[index[0] - 48].getDarkestSecret() << std::endl;
	}
}
