#include <iostream>
using namespace std;

bool num2; //global variable
#define pi= 13.1416


int main()
{
	cout << "Switch ~ (True or False)\n";
	cin >> num2;
	

	switch (num2)
	{
	case true:
		cout << "it is true\n";

	case false:
		cout << "it is false\n";
	
	}
}