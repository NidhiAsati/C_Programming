/*
 * main.c
 *
 *  Created on: 29-Jul-2020
 *      Author: yogesh
 */
#include<stdio.h>
int main()
{
	char A[3][10];
	int i;
	//char A[3][10]={"NIDHI","Mummy","Papa"};
	printf("Enter three Strings");
	for(i=0;i<=2;i++)
	{
		gets(&A[i][0]);   //it will take first row first address, second row 1st
		//address, third row 1st address


		//or
		//gets(A[i]);

	}
	for (i=0;i<=2;i++)
	{
		printf("%s\n",A[i]);
	}
}
