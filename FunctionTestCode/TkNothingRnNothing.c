/*
 * TkNothingRnNothing.c
 *
 *  Created on: 28-Jul-2020
 *      Author: yogesh
 */


#include<stdio.h>
int main()
{
	add();
}

void add(){
	int a,b,sum;
	printf("enter 2 no\n");
	scanf("%d%d",&a,&b);
	sum=a+b;
	printf("sum is %d",sum);
}
