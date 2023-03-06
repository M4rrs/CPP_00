#include "Account.hpp"
#include <iostream>
#include <iomanip>
#include <ctime>

int	Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

/*============	 CONSTRUCTOR	============*/
Account::Account( int initial_deposit ) {
	_amount = initial_deposit;
	_nbAccounts++;
	_accountIndex = _nbAccounts - 1;
	_nbDeposits = 0;
	_nbWithdrawals = 0;
	_totalAmount += initial_deposit;
	_displayTimestamp();
	std::cout << "Index: " << _accountIndex << " | Amount: " << _amount
			<< " | Created" << std::endl;
}

/*============	 DESTRUCTOR	============*/
Account::~Account() {
	_displayTimestamp();
	std::cout << "Index: " << _accountIndex << " | Amount: " << _amount
			<< " | Closed" << std::endl;
}

/*============	 PRIVATE	============*/

void Account::_displayTimestamp( void )
{
	char timeStr[50];

	std::time_t currentTime = std::time(NULL);
	std::strftime(timeStr, sizeof(timeStr), "%Y-%m-%d %H:%M:%S", std::localtime(&currentTime));
	std::cout << "[" << timeStr << "]\t" << std::flush;
}

/*============	 PUBLIC	============*/

int	Account::getNbAccounts( void )
{
	return _nbAccounts;
}

int	Account::getTotalAmount( void )
{
	return _totalAmount;
}

int	Account::getNbDeposits( void )
{
	return _totalNbDeposits;
}

int	Account::getNbWithdrawals( void )
{
	return _totalNbWithdrawals;
}

// total: accounts, amount, deposits, withdrawals.
void	Account::displayAccountsInfos( void ) 
{
	_displayTimestamp();
	std::cout << "Accounts: " << getNbAccounts() << " | Total: " << getTotalAmount()
			<< " | Deposits: " << getNbDeposits() << " | Withdrawals: " << getNbWithdrawals()
			<< std::endl;
}

// index, amount, deposits, withdrawal.
void	Account::displayStatus( void ) const
{
	_displayTimestamp();
	std::cout << "Index: " << _accountIndex << " | Amount: " << _amount
			<< " | Deposits: " << _nbDeposits << " | Withdrawals: " << _nbWithdrawals
			<< std::endl;
}

// index, previous amount, deposit, amount, nb deposits.
void	Account::makeDeposit( int deposit )
{
	_displayTimestamp();
	std::cout << "Index: " << _accountIndex << " | P_Amount: " << _amount << " | Deposit: "
			<< deposit << std::flush;
	_amount += deposit;
	_totalAmount += deposit;
	_nbDeposits++;
	_totalNbDeposits++;
	std::cout << " | Amount: " << _amount << " | Deposits: " << _nbDeposits << std::endl;
}

// index, previous amount
// if withdrawal more than amount, refuse and return false
// else: withdrawal, amount, nb withdrawal.
bool	Account::makeWithdrawal( int withdrawal)
{
	_displayTimestamp();
	std::cout << "Index: " << _accountIndex << " | P_Amount: " << _amount << " | Withdrawal: "
			<< std::flush;
	if (withdrawal > _amount)
	{
		std::cout << "\033[31mREFUSED\033[0m" << std::endl;
		return false;
	}
	_amount -= withdrawal;
	_totalAmount -= withdrawal;
	_nbWithdrawals++;
	_totalNbWithdrawals++;
	std::cout << withdrawal << " | Amount: " << _amount << " | Withdrawals: " << _nbWithdrawals << std::endl;
	return true;
}