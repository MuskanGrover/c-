//Accept a number at run-time, calculate and display its square root.
#include<iostream>
#include<cmath>
using namespace std;
int main()
{
	int n1;
	cout<<"ENTER THE NUMBER WHOSE SQUARE ROOT IS TO BE CALCULATED: "<<endl;
	cin>>n1;
	float s=sqrt(n1);
	cout<<"THE SQUARE ROOT OF NUMBER IS: "<<s;
	return 0;
	
}
