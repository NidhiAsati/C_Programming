/*
 * WritingInFilefprintf.c
 *
 *  	*	printf() : 	printf() function is used to write formatted output on the monitor screen.
 *
 *  	*	fprintf() :	fprintf() function is used to write formatted output to the specified stream.
 *
*  			syntex	:	int fprintf(FILE *Stream, const char *format [,argument,....]);
 *
 *  		exam 	:	fprintf(fp,"\nSum of %d and %d is %d",a,b,c);
 *
 *  		In fprintf() one more argument is there, that is File pointer(fp), which says that output we want
 *  		// in file not in monitor. we create a file pointer to access that file.
 */

#include<stdio.h>
int main()
{
	FILE *fp;
	int a,b;
	fp=fopen("/home/yogesh/Udemy_Nidhi/Embedded-C/My_workspace/Host/FileHandlingPrograms/f1.txt","w");
	printf("Enter two number");
	scanf("%d %d",&a, &b);
	fprintf(fp,"Sum of %d and %d is %d",a,b,a+b);
	fclose(fp);
}


