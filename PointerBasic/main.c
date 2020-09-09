/*
 *
 *
 *
 * Pointer Basics
 * Extended concept
 *
 *
 *
 */


//   **p is known as p is a pointer variable which is holding tha address of another
//	 pointer variable

#include<stdio.h>
int main()
{
	int x=6, *j, **k,***i; //k can take the address of *j
	j = &x;

	k = &j;
	i=&k;

	//if we want to change x value from the help of i then...
	**i=7; //changing x value

	printf("%d\n",x);	//6
	printf("%u\n",j);	//16389
	printf("%d\n",*j);	//6 //*j contain the the value of x,
	//becoz it is pointing to x

	printf("%u\n",&x);	//16389
	printf("%u\n",*&j);   //*& means only j's value      //16389


	printf("%u\n",k);
}
