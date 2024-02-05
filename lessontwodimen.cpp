#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
	int num[4][3], Ci, Ri; // two dimentional array

	for (Ci = 0; Ci <= 3; Ci++)
	{
		for (Ri = 0; Ri <= 2; Ri++)
		{
			cout << " Enter  an array number[" << Ci << "][" << Ri << "] : ";
			cin >> num[Ci][Ri];
		}
	}
	getch();
	system("CLS");
	cout << "\nEnter Column index number : ";
	cin >> Ci;
	cout << "\nEnter Row index number : ";
	cin >> Ri;

	cout << "\nthe value index no.[" << Ci << "][" << Ri << "]  is " << num[Ci][Ri];

	getch();
}