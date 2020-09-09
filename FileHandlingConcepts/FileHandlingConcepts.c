/*
 * WHy File Handling?
 *
* 	*	Data : is a an iformation. like name, addresse etc.
* 	*	Data persistance:
* 	*	File : File is a collection of information.
* 	*	File Handling: Reading or writing content in a file, which is stored in
* 		//hard-disk.
*
* 		If same data is to be processed again at some later stage. again we have
* 		to enter it.
*
* 		File is a structure(non primitive data type).
* 		typedef struct
* 		{
* 			..........
* 			.....
* 		};File
*
*		if we need to do changes in a file, first it need to load into ram, then we
*		take a file pointer to store 1st byte address of file (like a char array)
*		then we have predefined functions to what data need to be store and where
*		to be stored,
*		File is data type, which is stored in <stdio.h>
*		We need to create file type variable, then take a file pointer
*		to store address of that file variable.then use some file functions.
*
*		File *fp;
*
*		File pointer is variable, which is pointing to a file type variable,
*		In which inside a pointer which is pointing to actual file.
*
 */


