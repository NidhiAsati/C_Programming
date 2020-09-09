/*
 * ReadingFileContent.c
 *
 *  Reading from a file means :
 *  		* Extracting data from a flie to our program variables.
 *
 *  		* This will not remove data from that file.
 *
 *  		*fgetc() : It wil read one character from the file.
 *
 *  		*fgets() : It will read string by string.
 */


//Write a program to read content from a file and display on the screen.


//For reading purpose we take another varible, in which buffer data will copy.
#include<stdio.h>
#include<stdlib.h>
int main()
{
	FILE *fp;	//fp is a FILE pointer which is pointing to a buffer
				//pointer, which is inside the FILE type structure variable.
				//and that buffer pointer is pointing to 1st byte of file(image),
				//which is inside the RAM.

	char ch;		//it will used to put(copy) the content one by one(char by char)
					//from buffer.
	fp=fopen("/home/yogesh/Udemy_Nidhi/Embedded-C/My_workspace/Host/FileHandlingPrograms/f1.txt","r");
	//fopen() will create a FILE type variable in which buffler pointer is already present.
	//and that pointer will point to buffer(image)
	// and we take a FILE pointer not FILE type variable.
	if(fp==NULL)
	{
		printf("file not found");
		exit(1);
	}

	ch=fgetc(fp);	//To read file character. fgetc() will return one char,
					//which is inside 1st byte of file.
					//fp is address of FILE type varaible, In which buffer point
							//is there.
	while(!feof(fp))		// feof is used to find end of file.
	{
		printf("%c",ch);
		ch=fgetc(fp);	//Now pointer fp will move to nex byte address then read
	}					//next character.
		fclose(fp);
}
