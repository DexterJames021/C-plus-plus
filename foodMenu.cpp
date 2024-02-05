/*****************************************
Personal Project:

MENU 0.1
	
1.Create a program that displays the following menu for the food items available to take order from the customer:

• 1 - Burger 
• 2 - French Fries 
• 3 - Pizza
• 4 - Sandwich

  The program inputs the type of the food and quantity. It finally displays the total charges for the order according to following criteria:
  
• Burger = 200
• French Fries = 50 
• Pizza = 500 
• Sandwich - 150
	
******************************************/
#include <iostream>
using namespace std;

int main()
{
	char name[20];
	char address[50];
	int orderCode;
	int quantity;
	int burger, frenchFries, pizza, sandWich;

	burger = 200;
	frenchFries = 50;
	pizza = 500;
	sandWich = 150;

	cout << "----------  SPIDER-WEB: MENU  -----------\n";

	cout << "\n:::NAME: ";
	cin >> name;

	cout << ":::ADDRESS: ";
	cin >> address;

	cout << "\n------  SPIDER-WEB:TYPE THE NUMBER ORDER-CODE  ------\n";
	cout << "Type the number belong to it. ( its like LOADING MACHINE). Pls. used properly " << endl;
	

	cout << "1. burger      = 200\n";
	cout << "2. frenchFries = 50\n";
	cout << "3. pizza       = 500\n";
	cout << "4. sandWich    = 150";

	cout << "\n\n ORDER-CODE: ";
	cin >> orderCode;

	if (orderCode == 1)
{
		cout << "\nNAME & PRICE: Burger = " << burger;
}
else if (orderCode == 2)
{
	cout << "\nNAME & PRICE: French Fries = " << frenchFries;
}
else if (orderCode == 3)
{
	cout << "\nNAME & PRICE: Pizza = " << pizza;
}
else if (orderCode == 4)
{
	cout << "\nNAME & PRICE: SandWich = " << sandWich;
}
else
{
	cout << "\Invalid";
}


cout << "\n Quantity: ";
cin >> quantity;

// ------------------	Total	---------------------//

	if (orderCode == 1){
		cout << "\n  TOTAL: " << 200 * quantity;
}
	else if (orderCode == 2){
		cout << "\n  TOTAL: " << 50 * quantity;
}
	else if (orderCode == 3){
		cout << "\n  TOTAL: " << 500 * quantity;
}
	else if (orderCode == 4){
		cout << "\n  TOTAL: " << 150 * quantity;
}
	else{
	cout << orderCode<<" was Invalid"<<endl;	
}	
//------------------------------------------------------

	
if (orderCode == 1 || orderCode == 2 || orderCode == 3 || orderCode == 4)

		cout << "\n\n You're Order was Successful...";
	
else
	cout << "\n\n Error: INVALID";
	
// ----–--------------------–--------------–-----------//

cout << "\n----------------------------------------";
cout << "\nThank you. by: SPIDER-WEB";
}