#include<iostream>
using namespace std;
// for loop - sa placeholder may initialization, condition,increment or decrement
int main()
{
		int num1;
	cout << "ENTER A NUMBER TO DIVIDE";
	cin >> num1;
	
	for(int i = 1;i <= 10; ++i ){
		cout <<num1<<" / "<<i<<" = "<<num1 / i<<endl;
		
	}
}