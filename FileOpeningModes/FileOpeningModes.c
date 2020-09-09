/*
 * FileOpeningModes.c
 *
 * File Opening Modes : stating that, what is the intension to open the file.
 *
 *
 * Modes : r-only reading file. Not create file, If not exist.
 * 			If file is not present, it will return null.
 *
 * 			r+ 	R and W possible. Not Create file if not exist. Over-writing existing
 * 				dat. If file is not present, it will return null.
 * 				Used for modifying contents.(like In any record need to do some changes).
 *
 *
 * 			w-	only writing possible. Create file if not exist otherwise erase the
 * 				old content of a file and open as a blank file.
 *
 * 			w+	R and W possible. CReate file if not exist. Erase old content.
 *
 * 			a	Only writing possible. Create file if not exist otherwise open file
 * 				and write from the end of file(it Does not erase the old content).
 *
 * 			a+	R and W possible. Create file if not exist. Append content at the
 * 				end of file.
 */


#include<stdio.h>
int main()
{
	FILE *fptr;
	fptr=fopen("myFile.dat",r);	//only to read file contents
	if(fptr==NULL)
		printf("File not found");
}
