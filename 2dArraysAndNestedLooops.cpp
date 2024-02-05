#include<iostream>
using namespace std;
//Nested loops
//2D array

// [] = rows , [] = column, start at 0

int main()
{		
		int i,k;
//2D arrays 		
		int numGrid [5][5] = {
								{1,2},
								{3,4},
								{5,6},
								{7,8},
								{9,10},	
							};
		
		cout << "should be one: " <<	numGrid [0][0] << endl;
		
// Nested Loops
		for(i = 0;i < 5; i++){
			cout <<	endl;
				for(k = 0;k < 2;k++){
			cout <<	numGrid [i][k];
				
									}			
								}

		
						
}