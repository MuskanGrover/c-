/*5. Define a class CANDIDATE in C++ with the following specifications:
Private data members
• Rno(Registration Number) type integer
• Cname of type string
• Agg_marks (Aggregate Marks) of type float
• Grade of type character

Private member functions:
• setGrade () to find the grade as per the aggregate marks obtained by the student. Equivalent
aggregate marks range and the respective grade as shown below.
Aggregate Marks Grade
>=80 A
Less than 80 and >=65 B
Less than 65 and >=50 C
Less than 50 D
Public member functions:*/
#include<iostream>
using namespace std;
#include<cstring>
class Candidate
{
	private:
	int Rno;
	string cname;
	float agg_marks;
	char grade;
	
	setGrade();
	
	public:
		getdata();
		dispresult();
};
int Candidate::setGrade() 

{
	if(agg_marks>=80)
	{
		grade='A';
	}
	else if(agg_marks<80 && agg_marks>=65)
	{
		grade='B';
	}
	else if(agg_marks<65 && agg_marks>=50)
	{
		grade='C';
	}
	else if(agg_marks<50)
	{
		grade='D';
	}
}
int  Candidate::getdata()
{
	cout<<"\nENTER THE ROLLNUMBER: ";
	cin>>Rno;
	cout<<"\nENTER THE NAME: ";
	cin>>cname;
	cout<<"\nENTER THE AGGREGATE MARKS:" ;
	cin>>agg_marks;
	
}
int  Candidate::dispresult()
{
	cout<<"\nTHE ROLL NUMBER IS: "<<Rno;
	cout<<"\nTHE NAME IS: "<<cname;
	cout<<"\nTHE AGGREGATE MARKS ARE: "<<agg_marks;
	cout<<"\nTHE GRADE IS: "<<grade;
}
int main()
{
	Candidate c1,c2;
	c1.getdata();
	c1.dispresult();
	c2.getdata();
	c2.dispresult();
}
