#include <iostream>
using namespace std;

int main()
{
	int grade;
	cout << "Enter your grade: ";
	cin >> grade;

	switch (grade)
	{
	case 98:
	case 99:
	case 100:
		cout << "1.00";
		break;
	case 95:
	case 96:
	case 97:
		cout << "1.25";
		break;
	case 92:
	case 93:
	case 94:
		cout << "1.5";
		break;
	case 91:
	case 90:
	case 89:
		cout << "1.75";
		break;
	case 88:
	case 87:
	case 86:
		cout << "2.00";
		break;
	case 85:
	case 84:
	case 83:
		cout << "2.25";
		break;
	case 82:
	case 81:
	case 80:
		cout << "2.50";
		break;

	case 79:
	case 78:
	case 77:
		cout << "2.75";
		break;

	case 75:
	case 76:
		cout << "3.0";
		break;

	case 74:
		cout << "5.00";
		break;

	default:
		cout << "invalid";
	}
}