#include "Account.h"


Account::Account(Customer customer, int accountNumber) : _accountOwner(customer), _accountNumber(accountNumber)
{
}

Account::~Account()
{
}


void Account::Deposit(int numberOfPennies)
{
	_balanceInPennies += numberOfPennies;
	std::string output = "You have successfully deposited " + std::to_string(numberOfPennies) + " pennies in your account.";
	Account::_log.push_back(output);
}

void Account::Withdraw(int numberOfPennies)
{
	_balanceInPennies -= numberOfPennies;
	std::string output = "You have successfully withdrawn " + std::to_string(numberOfPennies) + " pennies from your account.";
	Account::_log.push_back(output);
}

int Account::getBalance()
{
	return _balanceInPennies;
}

int Account::getAccountNumber()
{
	return _accountNumber;
}

std::string Account::getAccountOwner()
{
	return _accountOwner.getFullName();
}
