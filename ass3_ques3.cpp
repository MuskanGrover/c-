/*
Define a class SUPPLY in C++ with the following specifications:
Private data members
• Code of type integer
• Foodname of type string
• Sticker of type string
• Foodtype of type string
Private member functions:
• A function gettype() to assign foodtype as per the following table:
Sticker Foodtype
GREEN Vegetarian
YELLOW Contains egg
RED Non-vegetarian
Public member functions:
• A function FOODIN() to allow the user to enter values for code, foodname, sticker and call
function getype() to assign respective Foodtype.
• A function FOODOUT() to display all the data members on screen.
*/


#include<iostream>
#include<cstring>
using namespace std;
class Supply
{
	private:
		int code;
		char foodname[30];
		char stick[30];
		char foodtype[30];
		//MEMBER FUNCTION
		void gettype();
	public:
		void foodin();
		void foodout();
};
void Supply:: gettype()
{
	if(strcmpi(stick,"GREEN")==0)
	{
		strcpy(foodtype,"Vegetarian");
	}
	else if(strcmpi(stick,"YELLOW")==0)
	{
		strcpy(foodtype,"CONTAINS EGG!!!");
	}
	else if(strcmpi(stick,"RED")==0)
	{
		strcpy(foodtype,"NON-VEGETARIAN");
	}
	else
	{
		strcpy(foodtype,"NO STICKER");
	}
	
}
void Supply:: foodin()
{
	cout<<"\nTHE FOOD DETAILS ARE:";
	cout<<"\n ENTER THE FOODCODE: ";
	cin>>code;
	cout<<"\n ENTER THE FOODNAME: ";
	cin>>foodname;
	cout<<"\n ENTER THE STICKER: ";
	cin>>stick;
	
	gettype();
	
	
}
void Supply::foodout()
{
	cout<<"\nTHE FOODCODE IS: "<<code;
	cout<<"\nTHE FOODNAME IS: "<<foodname;
	cout<<"\nTHE STICKER IS: "<<stick;
	cout<<"\nTHE FOODTYPE IS: "<<foodtype;
}
int main()
{
	Supply s1,s2;
	s1.foodin();
	s1.foodout();
	s2.foodin();
	s2.foodout();
}
