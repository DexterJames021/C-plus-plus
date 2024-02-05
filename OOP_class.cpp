#include<iostream>
#include<string>
using namespace std;
// OOP = Object Oriented Programming
// create object the building blocks
//Class is an blueprint: an instance of a Class

class user{
	
	public:
		string userName;
		string userType;
		int hp;
		int mp;
		int lvl;
		int exp;
	
	//constuctor
	user(){
		cout << "complete"<<endl;
		}	
	};

int main()
{
 	user playerOne;	
		playerOne.userName = "dex";
		playerOne.userType = "assasin";
		playerOne.hp = 123;
		playerOne.mp =123 ;
		playerOne.lvl = 123;
		playerOne.exp = 123;
		
		
		// accessing
	cout << "Player Name: " << playerOne.userName;	
			
}