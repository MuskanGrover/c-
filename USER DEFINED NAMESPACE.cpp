//user defined namespace
#include<iostream>
using std::cout;
using std::cin;
using std::endl;

namespace n1
{
	int a=100;
	void input()
	{
		cout<<"namespace n1";
	}
}
namespace n2
{
	int a=900;
	void input()
	{
		cout<<"namespace n2";
	}
}
int main()
{
	cout<<n1::a<<endl;
	n1::input();
	cout<<n1::a<<endl;
	n2::input();
}


