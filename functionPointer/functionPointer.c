/*
 * functionPointer.c
 *
 * 	*	Function Pointer :	Pointer is a variable which contain(store) address of other
 * 							variable or function.
 *  */

/*
int x;		//declare a variable
int *ptr;		//we take a pointer variable.
ptr=&x;		// we are storing the address of x.
*/


//Now function pointer.

/*void fun()		//Same above we define a function which is not taking any arg and
				//not returning anything.

{

}
int main()
{
	void(*ptr)();		//We took a pointer to store the address of that function.
				//Here paranthesis is very important.

	ptr=fun;			//Now storing the address of that funtion into a pointer variable.
				// We should not use paranthesis here(only should write name of function.

	ptr(5);			//Calling the function

*/

//Function Pointer example:
#include<stdio.h>
//If we want to call fun1() functiom through a pointer, in main() function firstwe need
//to daclare a function pointer .

int fun1(int x);		//Declaration of function
int main()
{
	int(*p)(int);	//p is a pointer, which is pointing to a function, that taka one
					//integer arg and return one integer arg.
	p=fun1;			// Storing fun1() address in p pointer.
	printf("%d\n",p(5));

}
						//
int fun1(int x)
{
	printf("value of x is=",x);
	return (x+1);
}
