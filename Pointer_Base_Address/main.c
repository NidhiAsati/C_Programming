/*
 * Pointer Base Address
 */

#include<stdio.h>
int main()
{
	int a, *i;
	int b, *j;
	int c, *k;


	/*	Pointer always consumes 4 bytes(int), whether it is any data type,
	becoz address will be maximum 4 bytes

	But it should store same type variable address, which type of pointer itself.

	*/

	i = &a;
	j = &b;
	k = &c;
printf("%u %u %u\n",i, j, k);
printf("%d %d %d",*i, *j, *k); // It will print the value at address of the
//variable, to which it is pointing.
//
}

