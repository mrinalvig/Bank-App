#include <iostream> 
#include "Bank.h"
using namespace std;

Bank bank = Bank("Awesome Bank");

void DisplayMenu();
void TransactMenu();
void AddAccountMenu();
void DisplayAccountsMenu();

int main()
{
	DisplayMenu();

	return 0;
}

void DisplayMenu()
{
	int choice = 0;

	while (choice != 10)
	{
		system("cls");
		cout << "Welcome to " << bank.getName() << endl;
		cout << "\n1) Add Account \n2) Transact \n3) Display Accounts \n\nWhat would you like to do? <1, 2, 3>" << endl;
		cin >> choice;

		switch (choice)
		{
		case 1: AddAccountMenu();
			break;
		case 2: TransactMenu();
			break;
		case 3:DisplayAccountsMenu();
			break;

		default: break;
		}

	} 
	
}

void AddAccountMenu()
{
	system("cls");

	cout << "Customer firstname: ";
	string firstName;
	cin >> firstName;

	cout << "Customer lastname: ";
	string lastName;
	cin >> lastName;

	cout << "Account Number: ";
	int accountNumber;
	cin >> accountNumber;

	Customer customer = Customer(firstName, lastName);
	Account newAccount = Account(customer, accountNumber);

	bank.CreateAccount(newAccount);
}

void TransactMenu()
{
	system("cls");
	cout << "Which Account?" << endl;
	cout << bank.ListAccounts() << endl;

	int chosenAccount;
	cin >> chosenAccount;

	system("cls");
	cout << "1) Deposit" << endl;
	cout << "2) Withdraw" << endl;
	
	int transactionType;
	cin >> transactionType;

	system("cls");
	cout << "How many penies?";
	int pennies;
	cin >> pennies;

	switch (transactionType)
	{
	case 1: bank.Deposit(chosenAccount, pennies);
			break;

	case 2: bank.Withdraw(chosenAccount, pennies);
			break;

	default: break;
	}
}

void DisplayAccountsMenu()
{
	system("cls");
	cout << bank.ShowAccounts() << endl;
	system("pause");
}
