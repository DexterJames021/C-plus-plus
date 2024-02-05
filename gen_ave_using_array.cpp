#include <iostream>
using namespace std;

// general average using array

int main()
{
	int grade[5];

	cout << "Fildis: ";
	cin >> grade[0];

	cout << "NSTP: ";
	cin >> grade[1];

	cout << "PEH: ";
	cin >> grade[2];

	cout << "MATH: ";
	cin >> grade[3];

	cout << "COMPRO: ";
	cin >> grade[4];

	cout << "HISTORY: ";
	cin >> grade[5];

	cout << "GEN. AVE:  " << (grade[0] + grade[1] + grade[2] + grade[3] + grade[4] + grade[5]) / 6;

	return 0;
}