
/*****************************************
ACTiViTY #3 (p. 69)
	Design a program that will accept two numbers. 
If the first number is larger than second number perform Subtraction,
if the first numberis less than the second number perform Addition
if the first number is the same as the second number perform Division
******************************************/

#include <iostream>
using namespace std;

int main()
{
	int FN, SN;
	int FN1, SN1;
	int yn;
	//-------------- INSTRUCTION ---------------//
	cout << "INSTRUCTION:\n\n ";
	cout << "This program Design that will accept two numbers.\n";
	cout << "If the first number is larger than second number,it will perform Subtraction\n";
	cout << "If the first numberis less than the second number,it will perform Addition\n";
	cout << "If the first number is the same as the second number,it will perform Division\n";

	//------------------- INPUTING -----------------------//
	cout << "\nENTER TWO NUMBER \n";
	cout << "\nFirst number is: ";
	cin >> FN;

	cout << "Second number is: ";
	cin >> SN;

	//-------------- Conditional process ---------------//
	if (FN > SN)
		cout << "First Number - Second Number = " << FN - SN;
	{
		if (FN < SN)
			cout << "First Number + Second Number = " << FN + SN;

		if (FN == SN)
			cout << "First Number / Second Number = " << FN / SN;
	}

	return 0;
}