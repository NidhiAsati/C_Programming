/*
 * 	*	PreProcessor : Pre-Processor is a program, which performs before
 * 		the compilation.
 *
 * 	*	Pre-Processor only notices # started statements.
 *
 * 	*	# is called Pre-Processor directive. whatever we will write after #,
 * 		it is called command.(include or define etc)
 *
 * 	*	Each pre-processing directive must be its own line.
 *
 * 	*	The word after # is called pre-processor command.
 *
 * 	*	include is one of the most popular pre-processor command.
 *
 * 	*	It can be used include any file content to our source file.
 *
 * 	* 	#include<file_name>
 * 		#include"file_name"
 *
 *
 */
//	First we create a .c file, whenever we compile the .c program with the help of
//	compiler program. first it will read by pre-processor program.

//pre-procesosor program reads only those statements which starts from #. then change
//those statements and create another file.

//After that that file will go to compile program.Compiler read that file and make a
// .obj file.

//That .obj file will goto linker program. Linker add the library files in that file and
// provide .exe file.

//We can include one (.c)source file into another file.
//For that first,we need to convert it into header file then path of
//that file need to give in double quotes in #include statement.
//becoz bydefault compiler will search all header file into a perticular folder
//(header file path)
//which is we have set already
// So, To include other path's file we need to write path(or file name) in (" ")
//double quote.
//Example :

//#include "c:\nidhi\yogesh\list.h"



