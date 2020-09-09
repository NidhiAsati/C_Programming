/*
 * main.c
 *
 *  Created on: 29-Jul-2020
 *      Author: yogesh
 */
//Ascii code of null character is 0
#include<stdio.h>
#include<string.h>
int main()
{
	char A[10]={'N','I','D','H','I'};

	char *p="Nidhi";
	p="YOGESH";
	int *ptr;
	printf("Name of String p=%s\n",p);



	printf("Lenth of String p=%d\n",strlen(p));
	printf("Lenth of String p=%d\n",sizeof(p));
	printf("Lenth of String ptr=%d\n",sizeof(ptr));


	/////////////////////////OR//////////////

	char B[10]="NIDHI";
		printf("Lenth of String B=%d\n",strlen(B));
		printf("Lenth of String B=%d\n",sizeof(B));
		/*for(int i=0;i<=5;i++)
	{
		printf("%c",B[i]);
	}*/





	///////////////////	or/////////////////////////




	/*for(int i=0;A[i]!='\0';i++)
	{
		printf("%c",A[i]);// need to use format specifier for next line

	}*/



	///////////////////////////OR/////////////////

	//	printf("%s",A);




		////////////OR/////////////////
		puts(A); ///cursor will go to next line after printing



}
