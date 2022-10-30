#include "Account.hpp"
#include <iostream>

int	Account::getNbAccounts( void ) {
	return Account::_nbAccounts;
}


int	Account::getTotalAmount( void ) {
	return Account::_totalAmount;
}

int	Account::getNbDeposits( void ) {
	return Account::_totalNbDeposits;
}

int	Account::getNbWithdrawals( void ) {
	return Account::_totalNbWithdrawals;
}

void	Account::_displayTimestamp( void ) {
	std::cout << "[" << std::time(nullptr) << "] ";
}

void	Account::displayAccountsInfos( void ) {
	_displayTimestamp();
	std::cout << "accounts:" << _nbAccounts << ";" << "total:" << Account::_totalAmount <<  ";" << "deposits:" << Account::_totalNbDeposits << ";" << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

Account::Account( int initial_deposit ) : _amount(initial_deposit) , _nbDeposits(0) , _nbWithdrawals(0) {
	Account::_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "index:" << _nbAccounts << ";" << "amount:" << _amount << ";" << "created" << std::endl;
	_accountIndex = _nbAccounts;
	Account::_nbAccounts += 1;
}

Account::Account (void ) {
}

void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "index:" << _accountIndex << ";" << "amount:" << _amount << ";" << "deposits:" << _nbDeposits << ";" << "withdrawals:" << _nbWithdrawals << std::endl;
}


Account::~Account( void ) {
	_displayTimestamp();
	std::cout << "index:" << this->_accountIndex << ";" << "amount:" << _amount << ";" << "closed" << std::endl;
}

void	Account::makeDeposit( int deposit ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	std::cout << ";deposit:" << deposit;
	this->_amount += deposit;
	Account::_totalAmount += deposit;
	std::cout << ";amount:" << this->_amount;
	this->_nbDeposits += 1;
	Account::_totalNbDeposits += 1;
	std::cout << ";nb_deposits:" << this->_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal ) {
	_displayTimestamp();
	std::cout << "index:" << _accountIndex;
	std::cout << ";p_amount:" << this->_amount;
	if (withdrawal > this->_amount)
	{
		std::cout <<";withdrawal:refused" << std::endl;
		return false;
	}
	std::cout << ";withdrawal:" << withdrawal;
	this->_amount -= withdrawal;
	Account::_totalAmount -= withdrawal;
	std::cout << ";amount:" << this->_amount;
	this->_nbWithdrawals += 1;
	Account::_totalNbWithdrawals += 1;
	std::cout << ";nb_withdrawals:" << this->_nbWithdrawals << std::endl;
	return true;
}

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;
