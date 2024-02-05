#include<iostream>
using namespace std;
int main()
{
	int grade;
	char x;

	cout << " enter your grade : "; 
	cin >> grade;
	
	switch(grade)
	{
	case 100:
	case 99:
	case 98:
		 cout <<" Equivalent grade : 1.00";
		break;
    case 97:
	case 96:
	case 95:
		 cout <<" Equivalent grade : 1.25";
		break;
    case 94:
	case 93:
	case 92:
		 cout <<" Equivalent grade : 1.50";
		 break;
    case 91:
	case 90:
	case 89:
		 cout <<" Equivalent grade : 1.75";
		break;
    case 88:
	case 87:
	case 86:
		 cout <<" Equivalent grade : 2.00";
		break;
    case 85:
	case 84:
	case 83:
		 cout <<" Equivalent grade : 2.25";
		break;
    case 82:
	case 81:
	case 80:
		 cout <<" Equivalent grade : 2.50";
		break;
    case 79:
	case 78:
	case 77:
		 cout <<" Equivalent grade : 2.75";
		break;
    case 76:
	case 75:
	    cout <<" Equivalent grade : 3.00";
		break;
	default:
		 cout <<" Equivalent grade : 5.00";

	}

  cin >> x;

}