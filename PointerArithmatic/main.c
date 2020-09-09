/*
 *
 *
 * Pointer Arithmatic
 *
 *
 */



/*
 * we can not add, subtract, multiply and divide two address
 */
#include<stdio.h>
int main()
{


	int a,b;
	int *p,*q,*c,*d;
	p=&a;
	q=&b;
	/////////	we can not add, subtract, multiply and divide the pointer////
	//a = p+q;
	//b= p-q;
	//a = &a*&q;
	//b=p/q;
	//a=p * 5;
	//b = q/4;

	///We cant do all above

/*
 *
 *
 *
 * //////////	We can add or subtract integer to/from an address	/////////
 *
 *
 *
 *
 */

	printf("%u %u \n",p,q);	//1615360 1615364
	c=p+1;		// it will give next block address, if base address is 1000,
	// then int p+1 give 1002, becoz its an integer pointer


	d=p-2; 	//	998
	printf("%d\n",c);	////1615364
	printf("%u",d);		//1615380
}


