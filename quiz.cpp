/*

		int i = 0;
	while(i < 5){
			i++;
			cout << i;
			
			} 
			
		cout <<"\n\n";
		int x = 2;
	do{
		cout <<"gawin mo mona to bago while";
		}while(x < 5);
		
*/

#include <iostream>
#include <string>

using namespace std;

int main()
{
	int lives = 3;
	string answer;

	while (lives != 0)
	{
		cout << "my name?/n ";
		cin >> answer;

		if(answer == "dexter")
		{
			cout << "youre correct"<<endl;
			break;
		}
		else
		{
			cout << "wrong"<<endl;
		}
		
	
	
		lives--;
	}
}
