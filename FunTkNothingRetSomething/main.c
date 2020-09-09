
//Take Nothing Return Something

#include<stdio.h>

//Function Prototype or Function Declaration
int add();// Global declaration****Any function can use add function
int main()
{

	int s;

	//Function Call
	s=add();
	printf("sum is %d",s);

}
//Function Definition
int add()

{
	int a,b,sum;
	printf("Enter 2 no\n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	//return sum;
	return (a+b);

	//return will return only one value
	//return a+b;    ******it will return a's value only************
	//return statement will return not only the value, but control also to the calling function, from where it is called.

	//printf("Hello");

	//printf will not be execute. becozAfter return statement next statement will not be executed, because control
	//will return immediately
}


