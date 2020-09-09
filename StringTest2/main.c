/*
 * main.c
 *
 *  Created on: 29-Jul-2020
 *      Author: yogesh
 */
//Ascii code of null character is 0


//address of 1st element of array represent the name of the Array.
#include<stdio.h>
int main()
{

	char A[10]="NIDHI";
	printf("Enter your Name ");

	//If address of 1st element of array is 1000, then A = 1000 == A=&A[0]
	//scanf("%s",A);    //Here A = address of the 1st element of the array, so we
	// can write like below also
	//puts(A);



	//////////////Or////////////


	//scanf("%s",&A[0]); //Here
	//puts(&A[0]);
//}


///scanf can not take multiword string, becoz scanf think the space is a delimeter
//means a data seperator
//so if we enter full name, it will print only first name
//For this we need to use gets

	//for scanf space and enter are delimeter(data seperator)
	//for gets only enter is delimeter

 gets(A);
 puts(A);
 }
