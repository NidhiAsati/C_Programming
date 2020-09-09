/*
 * WritingInFileusingfputs.c
 *
 *	fputs() : it is a function declarad in stdio.h header file.
 *
 *  fputs()	: it is a function to write a string into a file.
 *
 *  syntex	:	fputs(str,fp);	//str is address of the 1st byte of a char array,
 *  							//it is a string which we want to write into file.
 *
 */
// Write a program to write a string to a  file. Use fputs to write content to the file.


#include<stdio.h>
#include<stdlib.h>
int main()
{
	char str[100];
	FILE* fp;
	fp=fopen("/home/yogesh/Udemy_Nidhi/Embedded-C/My_workspace/Host/FileHandlingPrograms/f1.txt","w");

	fputs("Enter your name",fp);	//it will overwrite the f1.txt file content.
	fclose(fp);

	//We want to enter content(string) from user
	fp=fopen("/home/yogesh/Udemy_Nidhi/Embedded-C/My_workspace/Host/FileHandlingPrograms/f2.txt","a");
	printf("please Enter something here");
	gets(str);	//gets() will take data from keyboard
	fputs(str,fp);	//fput will write data into file.
	fclose(fp);

}



