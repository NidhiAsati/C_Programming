
//Take Something Return something

#include<stdio.h>

//Function Prototype or Function Declaration
int add(int , int );// Any function can use add function
int main()
{

	int x,y,s;
	printf("Enter 2 no\n");
	scanf("%d%d",&x,&y);

	//Function Call
	s = add(x,y);          //Actual Argument  //Call by value
	printf("sum is %d\n",s);

}
//Function Definition
int add(int a,int b)   //formal argument
//We can take x and y variable also, but they will be different from main(x, y)
{
	int sum;
	sum=a+b;
	return sum;
}
}
