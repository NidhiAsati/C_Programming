/*
 * WritingInFile.c
 *
 * // writing into File
 * Firts image of actual file will copy into RAM from hard disk.
 *  then we need to create a File pointer. which is pointing to a FILE variable(FILE
 *  data-type is made by using structure),
 *  In which buffer pointer is present. buffer pointer is inside the FILE data-type.
 *  That buffer pointer will point to the input buffer file.
 *
 *
 *  when input buffer will full, data will copy into actual file in hard disk.
 *  if buffer is not full, then after performin close operation,it will copy into
 *  acual file.
 */

#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{

	 int i,j;
   FILE *fptr1,*fptr2;
   char s1[]="Hello Students";	//contents what we are writing in file.
   char s2[100];
   fptr1=fopen("f1.txt","w");		//w is file mode.
   fptr2=fopen("f2.txt","w");

   ////fopen will create File type variable, in which many variables are present.buffer
   //	pointer is also already present. Now ptr will point to that buffer pointer and
   //  buffer pointer is pointing to input buffer(which is an image of actual
   //  file(f1.txt). then file will open.
   //fopen will return File type variable address.
   //If file is there, it will open and erased all cotent from file,
   //otherwise new file will be created.

   if(fptr1==0)
   {
	   printf("File can not open");
	   exit(1);//exit(1) isshowing that its an abnormal termination.
	   //its stating that if condition true, if block will be executed.
	   //if con. is false, then it can come out from if block.
   }

   	   for(i=0;i<strlen(s1);i++)
   	   {
   		   fputc(s1[i],fptr1);	//stating that content writing  in that file which
   				   //is handling by fptr.
   	   }
   	   fclose(fptr1);	// if buffer is not full, it will copy the contents to actual
   	   //file, and release the memory consumed by fptr, buffer and all..

// it will create f1.txt file in work space path, which is already have set.

 if(fptr2==0)
   {
	   printf("File can not open");
	   exit(1);//exit(1) isshowing that its an abnormal termination.
	   //its stating that if condition true, if block will be executed.
	   //if con. is false, then it can come out from if block.
   }
 	 printf("Enter any string");
 	 gets(s2);			// To take the string from user
 	 for(j=0;j<strlen(s2);j++)
 	 {
 		 fputc(s2[j],fptr2);
 	 }	//after writing in file, data will be in buffere, untill we will not close
 	 	 //that file using fclose().

 	 close(fptr2);

}
