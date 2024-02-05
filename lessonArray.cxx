#include <iostream>
#include <conio.h>
#include <windows.h>
using namespace std;

void LagayKo(int x, int y)
{
	COORD axis;
	axis.X = x;
	axis.Y = y;

	SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), axis);
}

int main()
{
	int i;
	char ans, val;

	LagayKo(5, 2);
	cout << "-------------------------------------------------------";
	LagayKo(5, 3);
	cout << "|               |                |              |               |";
	LagayKo(5, 4);
	cout << "-------------------------------------------------------";
	LagayKo(5, 5);
	cout << "         1               2              3               4";
	do
	{
		// system("CLS");
		LagayKo(5, 7);
		cout << "Enter index no. : ";
		cin >> i;
		if (i > 3)
		{
			LagayKo(5, 9);
			cout << "Stack Overflow";
		}
		else if (i < 0)
		{
			LagayKo(5, 9);
			cout << "Stack Underflow";
		}
		else
		{
			LagayKo(5, 8);
			cout << "Enter a value   : ";
			cin >> val;

			switch (i)
			{
			case 0:
				LagayKo(14, 3);
				break;
			case 1:
				LagayKo(30, 3);
				break;
			case 2:
				LagayKo(45, 3);
				break;
			case 3:
				LagayKo(61, 3);
				break;
			}

			cout << val;
		}

		LagayKo(5, 10);
		cout << "Try Again  y/n  : ";
		ans = getch();
	} while (ans == 'y' | ans == 'y');
}