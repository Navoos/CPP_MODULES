#pragma once

#include "contact.class.hpp"
#include <iomanip>
#include <iostream>

class PhoneBook
{
	private:
		Contact	_contacts[8];
		int	_index;
	public:
		PhoneBook( void );
		~PhoneBook( void );
		void	add(Contact &contact);
		void	printUser( void );
};
