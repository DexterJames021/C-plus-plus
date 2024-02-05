#include<iostream>
#include<string>
#include<conio.h>
using namespace std;

class studentinfo
{
	public:
      string studno;
	  string fullname;
	  int age;
	  char gender;

	    void printname()
		{
		  cout << "\nStudent Fullname : " << fullname; 
		}

		void inputname()
		{ 
          cout << "\nEnter your name : ";
		  cin >> fullname;
		}

		void printAge()
		{
           cout << "\nYour age is : " << age; 
		}

		void inputAge()
		{
           cout << "\nEnter your age: ";
		   cin >> age;
		}


};


int main()
{
  studentinfo studinfo[4];
  int i;

   for(i=0;i<=3;i++)
   {
     studinfo[i].inputname();
	 studinfo[i].inputAge();
   }
 
   
 
getch();

}#include