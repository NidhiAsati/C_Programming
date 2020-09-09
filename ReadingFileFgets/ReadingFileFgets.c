/*
 * ReadingFileFgets.c
 *
 *  *	fgets() : it a a function to read string from a file.
 *
 *  *	fgets(str,n,fp);	//str is address of the 1st sbyte fo a char array,
 *  						 in which we want to put string from the file.
 *
 *  						 n indicate, maximum how may character it will read
 *  						 at a time.(length of string)
 *
 *
 *  * 	fgets return a null value when it reads EOF.
 */


//Write a program to read content from a file and display on the screen. Use fgets()
//to read string.

#include<stdio.h>
#include<stdlib.h>

int main(){
	FILE* fp;
	char str[10];

	fp=fopen("/home/yogesh/Udemy_Nidhi/Embedded-C/My_workspace/Host/FileHandlingPrograms/f1.txt","r");

	if(fp==NULL){
		printf("File not found");
		exit(1);
	}
	while(fgets(str,9,fp)!=NULL){
		printf("%s",str);
	}
	fclose(fp);
}

