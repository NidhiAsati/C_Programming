/*
 * ReadingFileUsingfread.c
 *
 *  	*	fread() :	fread() function is used to read content from file in binary mode.
 *
 *  	*	syntex:
 *  					int fread=(void *Buffer,int SIze,int Count,FILE *Fptr);
 *  					//1st arg address of b1(where file data to be stored).
 *  					//2nd arg will be the record size which we want to read from file. So its size will be
 *  					//same as b1 size.
 *  					//3rd arg, number of such record
 *  					//4th arg file pointer.
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
	int a;
	struct book b1;
	FILE *fp;	//fp is a file pointer, it will store FILE type variable address.
	fp=fopen("myFile.dat","ab");	//to read file,which is in binary mode.
	if(fp==NULL)
	{
		printf("FIle not found");
		exit(1);	//program will exit abnormally.
	}
		a=fread(&b1,sizeof(b1),1,fp);	//frea() function will return 1 if record is present. it will return 0,
									//if record is not present.
		printf("a=%d",a);			//just we are checking a's value. it is returning .
		printf("%d %s %f",b1.bookid,b1.title,b1.price);

		a=fread(&b1,sizeof(b1),1,fp);	//frea() function will return 1 if record is present. it will return 0,
											//if record is not present.
		printf("a=%d",a);			//just we are checking a's value again.it will also return 1,becoz
									//2 records are there in file.

		a=fread(&b1,sizeof(b1),1,fp);	//frea() function will return 1 if record is present. it will return 0,
													//if record is not present.
				printf("a=%d",a);		//just we are checking a's value again.this time it will return 0,becoz
				//only 2 records are there in file.

		//If we want to read all record. and we dont know ,how many records are there.in file.
		//we can use fwrite() till end of file. next time internally pointer will point to next address.
		//so fwrite will rread next record.

	while(fread(&b1,sizeof(b1),1,fp)>0)		//frea() function will return 1 if record is present. it will
											//return 0 if record is not present. thats why(while... >0)
		{
			printf("%d %s %f\n",b1.bookid,b1.title,b1.price);
		}
	fclose(fp);
}


