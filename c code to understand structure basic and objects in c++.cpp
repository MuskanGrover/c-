#include <stdio.h>

//user-defined data type emp with three properties
struct emp
{
	int empid;
	char name[30];
	float sal;	
};

struct emp e1,e2; // variables of struct emp 
//Two non-member functions for input and output defined outside struct emp
void input()
{
	printf("\nEnter employee id : ");
	scanf("%d",&e2.empid);
	fflush(stdin);
	printf("\nEnter employee name : ");
	gets(e2.name);
	fflush(stdin);
	printf("\nEnter employee salary : ");
	scanf("%f",&e2.sal);
	fflush(stdin);
}

void output()
{
	printf("\nEmployee id : %d",e2.empid);
	printf("\nEmployee name : %s",e2.name);
	printf("\nEmployee salary : %f",e2.sal);
}

//non-member function
int main()
{
	//calling functions
	input();
	output();
	return 0;
}
