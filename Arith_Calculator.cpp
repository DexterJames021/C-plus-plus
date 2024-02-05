
/**************************************************
 * MAKE	A	BASIC	ARITHMETIC	CALCULATOR *
 **************************************************/
#include <iostream>
using namespace std;
int main()
{
	int num1,num2 ;
	char sign;
	
	cout <<"\n------------CALCULATOR------------\n";
	cout << "first number: ";
	cin >>num1;
	
	cout << "Second number: ";
	cin >>num2;
	
	cout << "operator you'll used: ";
	cin >>sign;
	
	if(sign == '+'){
		cout << "\nfirst number + second number = " << (num1 + num2);
	}
	else if(sign == '-'){
		cout << "\nfirst number - second number = " << (num1 - num2);
	}
	else if(sign == '*'){
		cout << "\nfirst number * second number = " << (num1 * num2);
	}
	else if(sign == '/'){
		cout << "\nfirst number / second number = " << (num1 / num2);
	}
	else {
		cout << "\n\nerror//";	
	}
	

}