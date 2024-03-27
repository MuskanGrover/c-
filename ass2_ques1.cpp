/*1. Define a class Worker in C++ with the following specifications:
Private data members
• wno of type integer
• wname of string type
• hours of type int
• rate of type int
• wage of type int
Private member functions:
• calc_wage() - to calculate wage of a worker as hours * rate
Public member functions:
• A function enter_worker() () to allow the user to enter values for wno, wname, hours, rate
and call function calc_wage() to calculate the wage of a worker.
• A function show_worker() to allow the user to view the content of all the data members of a
worker.
NOTE:
Make the above code in two ways:
(A) Give member function definitions inside class, and
(B) Give member function definitions outside class./*/
#include<iostream>
using namespace std;

class Worker
	{
		private:
			int wno;
			char wname[30];
			int hours;
			int rate;
			int wage;
			//MEMBER FUNCTION 
			void calc_wage();
		public:
			void enter_worker();
			void show_worker();
    };
void Worker::calc_wage()
{
	wage=rate*hours;
}
void Worker::enter_worker()
	{
		cout<<"ENTER THE DETAILS OF WORKER";
		cout<<"\nNTER THE WORKER NUMBER:";
		cin>>wno;
		cout<<"\nENTER THE NAME OF WORKER:";
		cin>>wname;
		cout<<"\nENTER THE HOURS WORKED:";
		cin>>hours;
		cout<<"\nENTER THE RATE:";
		cin>>rate;
		calc_wage();
		
	}
void Worker::show_worker()
	{
		cout<<"\nTHE NUMBER OF WORKER IS: "<<wno;
		cout<<"\nTHE NAME OF THE WORKER IS:"<<wname;
		cout<<"\nTHE HOURS OF WORKER IS:"<<hours;
		cout<<"\nTHE RATE OF WORKER IS:"<<rate;
		cout<<"\nTHE WAGE OF WORKER IS:"<<wage;
	}
int main()
{
	Worker w1,w2;
	w1.enter_worker();
	w1.show_worker();
	w2.enter_worker();
	w2.show_worker();
}

