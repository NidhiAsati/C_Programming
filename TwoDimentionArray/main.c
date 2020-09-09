/*
 * main.c
 *
 *  Created on: 29-Jul-2020
 *      Author: yogesh
 */

#include<stdio.h>
int main()
{

	int A[3][3],B[3][3],C[3][3],i,j;

	printf("Enter 9 no.");

	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf("%d",&A[i][j]);
		}
	}
	printf("enter 9 no. for 2nd matrix");

	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			scanf(" %d",&B[i][j]);
		}
	}
	for(i=0;i<=2;i++)
	{
		for(j=0;j<=2;j++)
		{
			C[i][j]= A[i][j]+B[i][j];
			//printf("\n");
			printf("%d\t",C[i][j]);

		}
		printf("\n");
	}



}

