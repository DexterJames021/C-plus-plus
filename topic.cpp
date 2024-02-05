/* CC103 programming 2

Topic:
  base class
  derived class
  polymorphism
  

declaration:

   class classname    ---------- base class
   { 
             
    };

    class classname : public classname   --------- derived class
    {

    };

ex.

  class threehundred
   {
      public:
          void speak()
            {
             cout << "This is sparta \n" ; 
            }
    };

  class sparta: public threehundred
   {
       public:
           void shout()
               {
                  cout << "AHOO AHOO\n" ;
               } 
   };*/

#include <iostream>
#include <conio.h>
#include <string>
using namespace std;
class valuEof
{
  public:
	void valueX(int x) { cout << "the value of x is : " << x; }
	void valueX(double x) { cout << "the value of x is : " << x; }
	void valueX(string x) { cout << "the value of x is " << x; }
	void valueX(int x, int y) { cout << "the value of x is : " << x << "and" << y; }
	void valueX(char x) { cout << "the value of x is : " << x; }
};
int main()
{
	valuEof printX;
	printX.valueX(1, 234);
	getch();
}