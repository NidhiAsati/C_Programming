/*
 * TakesomethingRnNothing.c
 *
 *  Created on: 28-Jul-2020
 *      Author: yogesh
 */


//Take Something Return Nothing

#include<stdio.h>

//Function Prototype or Function Declaration
void add(int , int );// Any function can use add function
int main()
{

	int x, y;
	//void add(int , int );    //Only main() can call the add()

	printf("Enter 2 no\n");
	scanf("%d%d",&x,&y);

	//Function Call
	add(x, y);          //Actual Argument  //Call by value

}
//Function Definition
void add(int a,int b)   //formal argument
//We can take x and y variable also, but they will be different from main(x, y)
{
	int sum;
	sum=a+b;
	printf("sum is %d",sum);
}
