/*
 * ReadingFilefscanf.c
 *
 *  	*	scanf() :	scanf() function is used to read formatted content from fila.
 *
 *  		syntex	:	int fscanf(FILE *Stream, const char *format,....);
 *
 *  					fscanf() reads data from the stream and stores them according to the parameter format
 *  					into the locations pointed by the additional arguments.
 *
 *
 */
//scanf() read data from input buffer(A cha array).So first data will store as chararct by character in buffer.
//then if scanf found delimeter. it will change that char data into respected data(like integer),
//becoz %d is there.


//Write a program to read content from a file and display on the screen. Use fscanf() to read content from
// the file.

#include<stdio.h>
int main()
{
	FILE *fp;
	int a,b,c;
	fp=fopen("/home/yogesh/Udemy_Nidhi/Embedded-C/My_workspace/Host/FileHandlingPrograms/f2.txt","r");

	//fscanf(fp,"%d %d %d",&a,&b,&c);	//We can give space or \t or\n in betbeen %d and %d. because bydefault
	// data seperator are these three only.If we will not give,then it will take bydefault.
	//if there are different dalimiteter used in our file, we need to put that inbetween %d and %d.

	//if comma is there between data in file. like 12,47, 57 then we need to put comma in between %d and %d
	//to read data from that file..
	fscanf(fp,"%d,%d,%d",&a,&b,&c);
	printf("a=%d b=%d c=%d",a,b,c);
	fclose(fp);

}

