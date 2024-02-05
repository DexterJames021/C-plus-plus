#include<iostream>
#include<string>
using namespace std;

class rpg{ // template or main class
	public:
		string type;
		int hp;
		int mp;
		int exp;
		int lvl;
						
};
int main(){
		rpg charac1; // sub - class
			charac1.type ="mage";
			charac1.hp =87;	
			charac1.mp =85;
			charac1.exp =20;
			charac1.lvl = 10;	
	
		rpg charac2; // sub - class
			charac2.type ="assasin";
			charac2.hp =100;	
			charac2.mp =100;
			charac2.exp =50;
			charac2.lvl = 10;			
	
	
	
	
	// display
	cout <<"Player 1\n";
	cout <<"Class: "<<charac1.type<<endl;
	cout <<"Health: "<<charac1.hp<<endl;
	cout <<"Magic Points: "<<charac1.mp<<endl;
	cout <<"Expirence: "<<charac1.exp<<endl;
	cout <<"Level: "<<charac1.lvl<<endl;
	
	
return 0;
}