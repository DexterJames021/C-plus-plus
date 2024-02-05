
/*****************************************

   ask for password then print the info.
 if wrong then close.
*****************************************/
#include<iostream>
using namespace std;

int main()
{
	int pass,yn;
	
	cout <<"  TO GIVE YOU ACCESS TO THIS FILE, ENTER THE 3 DIGITS PASSWORD\n";
	
	cout << "\n Password:";
	cin >> pass;
    
		if(pass == 123)
	{
		
	cout <<"Password correct...";
	cout <<"Open the file? (y/n): ";
	cin >> yn;
	
			
		if(yn != 'n' || yn != 'N')
	cout <<"/storage/emulated/0/file/\n ~ Photos: \nnude pic.jpeg\nhaha.png\nbawal_bantos.pic\n";
	
		
		else
	cout << " File close.";
	
	}
	
		else
cout <<"Sorry my friend, But the password you type-in is invalid.";

	
}