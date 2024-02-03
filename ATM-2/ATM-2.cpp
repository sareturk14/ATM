// ATM-2.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;

void showMenu() {

	cout << "**********MENU**********" << endl;
	cout << "1.CHECK BALANCE" << endl;
	cout << "2.WITHDRAW" << endl;
	cout << "3.DEPOSIT" << endl;
	cout << "4.EXIT" << endl;
	cout << "************************" << endl;
}
int main()
{
	int options;
	double balance = 1000;
	do {
		
		

		showMenu();
		cout << "options:";
		cin >> options;

		switch (options) {
		case 1:cout << "Balance is:" << balance << endl;
			break;
		case 2:cout << "Your Balance Is:" << balance << endl;
			cout << "Withdraw amount:";
			double withdrawAmount;
			cin >> withdrawAmount;
			if (withdrawAmount <= balance) {
				balance -= withdrawAmount;
				cout << "Available Balance:" << balance << endl;
			}
			else
				cout << "Not Enough Money!" << endl;
			break;
		case 3:cout << "Your Balance Is:" << balance << endl;
			cout << "Deposit amount:";
			double depositAmount;
			cin >> depositAmount;
			balance += depositAmount;
			cout << "New Balance:" << balance << endl;
			break;


		}
	} while (options != 4);
	return 0;

}

