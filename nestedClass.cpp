#include<iostream>
#include<conio.h>
using namespace std;

class animal
{
public:
	void animalsound()
	{
		cout << " the animal make sound\n";
	}
};


class pusa: public animal
{
	public:
	void tunog()
	{
		cout << " Ang sabi ng pusa ay : Meow moew\n";
	}
};

class aso: public animal
{
	public:
	void animalsound()
	{
		cout << " Ang sabi ng aso ay : AW Aw\n";
	}
};
class baboy: public animal
{
	public: 
	void animalsound()
	{
		cout << " Ang sabi ng baboy ay : oink oink\n";
	}
};

 
int main ()
{
	animal mga_hayup;
	pusa kitty;
	aso doggy;
	baboy  piggy;

	kitty.animalsound();

	getch();

}