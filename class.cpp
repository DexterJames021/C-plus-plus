#include<iostream>
#include <string>
using namespace std;

 class name{
 	
 	public:
		string line1; 	
 		string line2;
 	};



int main()
{
	name lineObj1;
		lineObj1.line1 = "hello ";
		
	name lineObj2;
		lineObj2.line2 = "world";
	
	cout<< lineObj1.line1<<" "<<lineObj2.line2;
		 
}