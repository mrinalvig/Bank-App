#pragma once
#include "Account.h"
#include <string>
#include <vector>

class Bank
{
private:
	std::string _name;
	std::vector <Account> _accounts;
public:
	Bank(std::string name);
	~Bank();

	std::string getName();
};

