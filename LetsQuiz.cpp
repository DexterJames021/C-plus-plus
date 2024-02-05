#include <iostream>
using namespace std;

int main()
{
	char YN;
	char answer1, answer2, answer3;

	cout << "Let's Quiz!" << endl
		 << endl;
	cout << "	NOTE 1#: You have only Three(3)live to answer,Choose the right answer." << endl;
	cout << "	NOTE 2#: Type a,b, or c for your answer." << endl
		 << endl;
	cout << "-----------------------–---------------------------------" << endl;
	cout << "	Want to Start?: (y/n)  ";
	cin >> YN;
	cout << endl;

	if (YN == 'Y' || YN == 'y')
	{
		// Question 1#
		cout << "1. COMPUTER IS? " << endl;
		cout << "	a. Smart" << endl;
		cout << "	b. Fast" << endl;
		cout << "	c. Slow " << endl;
		cout << "Answer: ";
		cin >> answer1;

		if (answer1 == 'b' || answer1 == 'B')
		{
			cout << "	- Yup, Computers are Fast, Not Smart remember that." << endl
				 << endl;
		}
		else
			cout << "	- Wrong, review that again" << endl
				 << endl;

		cout << " Good job!";
		cout << "------------------------------" << endl
			 << endl;

		// Question 2#:
		cout << "2. WHO CREATE C LANGUANGE? " << endl;
		cout << "	a. Dennis Ritchie" << endl;
		cout << "	b. Ada lovelace" << endl;
		cout << "	c. Aristotle" << endl;
		cout << "Answer: ";
		cin >> answer2;

		if (answer2 == 'a' || answer2 == 'A')
		{
			cout << "	- Good, it is Dennis M. Ritchie " << endl;
		}
		else

			cout << " Good job!";
		cout << "-------------------------------" << endl
			 << endl;

		// Question 3#:
		cout << "3. C++ publish?   " << endl;
		cout << "	a. AEFAEF" << endl;
		cout << "	b. AEFAFEAFaAEFe" << endl;
		cout << "	c. AAFAEAEFEA" << endl;
		cout << "Answer: ";
		cin >> answer3;

		if (answer2 == 'a' || answer2 == 'A')
		{
			cout << "	- Good, it is Dennis M. Ritchie " << endl;
		}
		else
			cout << "	- Nice Try" << endl;

		cout << " Good job!";
		cout << "-----------------------------" << endl
			 << endl;
	}
	else
		cout << "hmmm,Okay. Thanks!";
	cout << " Thanks! ";
}