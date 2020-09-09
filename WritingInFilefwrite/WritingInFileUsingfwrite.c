/*
 * WritingInFileUsingfwrite.c
 *
 *  	*	fwrite() function is used to write content to the file in binary mode.
 *
 *  	*	syntex :
 *  					int fwrite()= (void *Buffer,int Size,int Count,FILE *ptr);
 *  					// in first arg, we pass the address of that variable(memory block),
 *  					whose data we need to write into file.
 *
 *  					//in 2nd arg we give the size of variable,how much data we write into file.
 *  					//if we dont know the size(in bytes) of variable, we will use sizeof() operator.
 *  					//In 3rd arg we give No. of such size records.
 *  					//In 4th arg, we pass FILE pointer, which is pointing to FILE TYPE variable,
 *  					//In which file pointer will be there, which is pointing to buffer(File Image)
 *
 *
 *  	*	Text mode and Binary mode :
 *
 *  				*	Text mode : In text mode some no. of bits suppose(01101) (group of bits)called
 *  					one character then other sequence no of bit are called another character.
 *  					So In text mode file is consider as a sequence of character.
 *
 *  				*	Binary mode : In binary mode we will not assume no. of bits(0-1 sequence)
 *  					sequence as a charater.
 *
 *  					So when we want to read-write the file format, which is not a text file.like
 *  					audio, video, image(photograph), then we will use binary mode.
 *
 *  				*	Binary modes are like prior only, but we need to add character b as a sffix
 *  					with earlier modes like:
 *  					wb,wb+, rb, rb+, ab, ab+.
 *  				* 	In
 *
 *  					In text mode,suppose we are writing content, and if we use \n.cursor will go to the
 *  					next line. So in text mode special character will be stored as their meaning. because
 *  					text mode will undersatnd the meaning of character's meaning.
 *  					But in binary mode, if we write content in file, and use \n. it will store as it is,
 *  					means it will store sequence of 1 and 0. and binary mode will not understand data.
 *  					It will take everything as 1 and 0.
 *
 *
 */

#include<stdio.h>
struct book
{
	int bookid;
	char title[20];
	float price;
};
int main()
{
	struct book b1;
	FILE *fp;
	fp=fopen("myFile.dat","wb");
	printf("Enter bookid,title,price");
	scanf("%d",&b1.bookid);
	fflush(stdout);
	gets(b1.title);	//only name of array denotes the address of array.
	scanf("%f",&b1.price);

	fwrite(&b1,sizeof(b1),1,fp);				//	1st arg : where is that data,which we want to write.
										// 2nd arg size of data which we want to write. we can directly calculate. its
										//26 bytes.
										// 3rd arg : no of such record of that size.
										//then 4th arg file pointer.
	fclose(fp);
}	// here file will create, but we cant read the cotent of that file..becoz its in special character.
