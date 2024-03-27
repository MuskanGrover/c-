/*2. Define a class FLIGHT in C++ with the following specifications:
Private data members
• Flightcode of type integer
• Destination of string type
• Distance of type float
• Fuel of type float

2 | P a g e
Private member functions:
• A function CALCFUEL() to calculate value of Fuel as per the following criteria:

Distance Fuel
<=1000 500
More than 1000 and <=2000 1100
More than 2000 2200

Public member functions:
• A function FEEDINFO() to allow the user to enter values for Flightcode, Destination, Distance
and call function CALCFUEL() to calculate the quantity of Fuel.
• A function SHOWINFO() to allow the user to view the content of all the data members.*/
#include<iostream>
using namespace std;
class Flight
{
	int flightcode;
	char dest[40];
	float dist;
	float fuel;
	//Member function
	void calcfuel();
	public:
		void feedinfo();
		void showinfo();
};
void Flight::calcfuel()
{
	if(dist<= 1000)
	{
		cout<<"\nTHE FUEL SO USED IS 500";
	}
	else if(dist>1000 && dist<=2000)
	{
		cout<<"\nTHE FUEL USED IS 1100";
	}
	else
	{
		cout<<"\nTHE FUEL USID IS 2200";
	}
	
}
void Flight::feedinfo()
{
	cout<<"\nENTER THE FLIGHT CODE: ";
	cin>>flightcode;
	cout<<"\nENTER THE DESTINATION: ";
	cin>>dest;
	cout<<"\nEMTER THE DISTANCE: ";
	cin>>dist;
	cout<<"\nENTER THE FUEL: ";
	cin>>fuel;
	calcfuel();
}
void Flight::showinfo()
{
	cout<<"\nTHE FLIGHT CODE IS: "<<flightcode;
	cout<<"\nTHE DESTINATION IS: "<<dest;
	cout<<"\nTHE DISTANCE IS: "<<dist;
	cout<<"\nTHE FUEL IS:"<<fuel;
	
}
int main()
{
	Flight f1,f2;
	f1.feedinfo();
	f1.showinfo();
	f2.feedinfo();
	f2.showinfo();
	
}
