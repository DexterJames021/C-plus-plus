/********************

calendar using switch

********************/

#include<iostream>
using namespace std;

int main()
{
	int m;	
		cout << "Code: 1 for January, 2 for febuary and So forth\n";
		cout << "ENTER THE MONTH: ";
		cin >>m; 		
	
	
	switch(m){
	
	case 1: 
		cout <<m<<" is January";
		break;
		
	case 2:
		cout <<m<< " is Febuary";
		break;
		
	case 3:
		cout <<m<< " is March";
		break;
		
	case 4:
		cout <<m<< " is April";
		break;
		
	case 5:
		cout <<m<< " is May";
		break;
			
	case 6:
		cout <<m<< " is June";
		break;
		
	case 7:
		cout <<m<< " is July";
		break;	
		
	case 8:
		cout <<m<< " is August ";
		break;	
		
	case 9:
		cout <<m<< " is September";
		break;	
		
	case 10:
		cout <<m<< " is October";
		break;	
		
	case 11:
		cout <<m<< " is November ";
		break;	
		
	case 12:
		cout <<m<< " is December";
		break;	
		
	default:	
		cout <<"invalid";
		break;
		
		
		}
}