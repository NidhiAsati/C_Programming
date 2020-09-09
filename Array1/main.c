/*
 * main.c
 *
 *  Created on: 29-Jul-2020
 *      Author: yogesh
 */

//int A[]; its wrong
//int A[5]={1,2,3}; we can do that
//int A[4]={1,2,3,4,56,6} cant do that
//int A[3][4], but memory will alocate leiner order
//Tow Dimention array is array of array
//dimention of array depends on type of date whether it is in group or single



#include<stdio.h>
int main(){

	int i,sum=0;
	float avg;
	int A[10];
	printf("Enter 10 no.s");
	for(i=0;i<=9;i++){
		scanf("%d",&A[i]);

	}
	for(i=0;i<=9;i++)
	{		sum=sum+A[i];

	}
		avg=sum/10.0;
		printf("avg is %f",avg);

}

