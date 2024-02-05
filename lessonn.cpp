#include<iostream>
#include<conio.h>
using namespace std;
int main()
{
	int num[4],i; // single array

	  for(i=0;i<=3;i++)
	  {
		cout << "Enter an array number[" <<i<<"] : ";
		cin >> num[i];
	  }
	  system("CLS");
	     cout<< "\nEnter index number : ";
		 cin >> i;
		 cout << "\nThe value of array index no. is : " << num[i]; 
	      


  getch();
}