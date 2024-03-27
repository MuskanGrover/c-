//Accept two numbers at run-time and display the minimum out of them.
#include<iostream>
using namespace std;
int main()
	{
		int n1,n2;
		cout<<"ENTER THE N1 AND N2: ";
		cin>>n1>>n2;
		if(n1>n2)
		{
			cout<<"n2 IS MINIMUM AMONG n1 AND n2";
		}
		else
		{
			cout<<"n1 IS MINIMUM NUMBER";
		}
	}
