// Kyle Rooney
// COP2000
// Homework 3 Rhonda's Strikeforce Gym

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
	const double GOLD_LEVEL = 1.01,  // Gold Rate @ %1
		SILVER_LEVEL = 1.02,        // Silver Rate @ %2
		BRONZE_LEVEL = 1.04,       // Bronze Rate @ %4
		BASE_COST = 1200.00; // Base Membership Cost @ $1200

	double cost,
		rate;

	int year;

	char member = '0';

	do
	{
		cout << "\t Welcome to Rhonda's Strikeforce Gym! \n" << endl;
		cout << "x--------------------------------------------x\n" << endl;
		cout << "\t Membership Fee Calculator\n" << endl;
		cout << " 1. Gold\n";
		cout << " 2. Silver\n";
		cout << " 3. Bronze\n";
		cout << " 4. Quit\n" << endl;
		cout << "Please Enter your Membership Level ( 1,2,3 or 4 to Quit) > ";
		cin >> member;
		cout << endl;
		cout << fixed << showpoint << setprecision(2) << left;


		// If user picks an invalid number this will ask the user for a valid number 1-4.
		while (member < '1' || member > '4')
		{
			cout << "Invalid Selection, please enter a number 1 - 4\n";
			cin >> member;
		}

		switch (member)
		{

			// Gold fees over 10 Years.
		case '1': rate = GOLD_LEVEL;
			break;

			// Silver fees over 10 Years.
		case '2': rate = SILVER_LEVEL;
			break;

			// Bronze fees over 10 Years.
		case '3': rate = BRONZE_LEVEL;
			break;
		}

		if (member == '1' || member == '2' || member == '3')
		{
			for (year = 1, cost = rate*BASE_COST; year <= 10; year++)
			{
				cout << "Year " << setw(5) << year << " $" << cost << endl;
				cost *= rate;
			}
			cout << endl;
		}


	} while (member != '4');

	// If 4 is selected, end the program.
	if (member == '4')
		cout << "Thank you for using Rhonda's Fee Calculator!\n" << endl;

	return 0;
}