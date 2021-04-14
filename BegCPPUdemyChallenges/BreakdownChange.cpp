// BreakdownChange.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
int main()
{
	cout << "Welcome to Change Breaker" << endl;
	cout << "-------------------------" << endl;
	cout << "How much change is left: ";

	int change, quarters, dimes, nickels, pennies;
	cin >> change;
	
	const int quarterValue = 25;
	const int dimeValue = 10;
	const int nickelValue = 5;

	quarters = change/quarterValue;
	change %= quarterValue;

	dimes = change / dimeValue;
	change %= dimeValue;

	nickels = change / nickelValue;
	change %= nickelValue;

	pennies = change;

	cout << "# of Quarters: " << quarters << endl;
	cout << "# of Dimes: " << dimes << endl;
	cout << "# of Nickels: " << nickels << endl;
	cout << "# of Pennies: " << pennies << endl;
}
