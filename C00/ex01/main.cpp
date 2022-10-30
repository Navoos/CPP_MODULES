#include "contact.class.hpp"
#include "phonebook.class.hpp"
#include <iostream>
#include <string>

static void	fetch_data( std::string	&firstName, std::string &lastName, std::string &nickname, std::string &phoneNumber, std::string &darkestSecret)
{
	std::cout << "first name : ";
	if (!getline(std::cin, firstName))
		exit(1);
	while (firstName == "")
	{
		std::cout << "ERROR : Empty field" << std::endl;
		std::cout << "first name : ";
		if (!getline(std::cin, firstName))
			exit(1);
	}
	std::cout << "last name : ";
	if (!getline(std::cin, lastName))
		exit(1);
	while (lastName == "")
	{
		std::cout << "ERROR : Empty field" << std::endl;
		std::cout << "last name : ";
		if (!getline(std::cin, lastName))
			exit(1);
	}
	std::cout << "nickname : ";
	if (!getline(std::cin, nickname))
		exit(1);
	while (nickname == "")
	{
		std::cout << "ERROR : Empty field" << std::endl;
		std::cout << "nickname : ";
		if (!getline(std::cin, nickname))
			exit(1);
	}
	std::cout << "phone number : ";
	if (!getline(std::cin, phoneNumber))
		exit(1);
	while (phoneNumber == "")
	{
		std::cout << "ERROR : Empty field" << std::endl;
		std::cout << "phone number : ";
		if (!getline(std::cin, phoneNumber))
			exit(1);
	}
	std::cout << "darkest secret : ";
	if (!getline(std::cin, darkestSecret))
		exit(1);
	while (darkestSecret == "")
	{
		std::cout << "ERROR : Empty field" << std::endl;
		std::cout << "darkest secret : ";
		if (!getline(std::cin, darkestSecret))
			exit(1);
	}
}

int main( void )
{
	std::string	input;
	std::string	firstName;
	std::string	lastName;
	std::string	nickname;
	std::string	phoneNumber;
	std::string	darkestSecret;
	PhoneBook	phoneBook;
	int			index = 0;
	
	std::cout << ">> ";
	while (getline(std::cin, input))
	{
		if (input == "ADD")
		{
			if (index >= 8)
				index = 7;
			fetch_data(firstName, lastName, nickname, phoneNumber, darkestSecret);
			Contact contact(firstName, lastName, nickname, phoneNumber, darkestSecret, index);
			phoneBook.add(contact);
			index += 1;
		}
		else if (input == "SEARCH")
			phoneBook.printUser();
		else if (input == "EXIT")
			exit(0);
		std::cout << ">> ";
	}
}
