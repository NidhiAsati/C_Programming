/*
 * Char Pointer
 */


/*
/
 *
 /

 /** *   **String is stored in char array....
 *   ** char pointer point to char block
 *
 *   **  it will consume 1 extra byte for null charater.
 */
#include<stdio.h>
#include<string.h>
int main()
{
			char c[]="computer";

			char S[10]="computer"; // it will take 11 bytes in memory.
    		char *p;
   			p=&S[0];	// it will return 1st block addres.
   			printf("Addres of S = %u\n",p);
   			// *(p+i) = c[i]



/*	/////// String Constant	//////////////
 *
 * String Literal	=	STring Constant	=	String
 *
 * printf("Computer \n");	//Here computer is an string constant, It will represent
 * address of 1st block of char array.
 *
 *
 */


	printf(c);	// Array name represent the address of 1st element block.
			//or
	printf("lenth of string=%d\n",strlen(&c[0]));
			// Or									// both r represent 1st block a
													//	ddress
	printf("lenth of string=%d",strlen("computer"));



}
