/*
 * CmdLineArg.c
 *
 *	*	Command Line:
 *
 *	*	Ways to run our Progrm :
 *								*	Using IDE
 *								*	By double click
 *								*	Using command line
 *
 *
 *		Build :	When we build a program in any through ant IDE, it will get compile(using compiler) and link(using
 	 			Linker software) and provide object file(.obj).

 	 	Run :	When we run program, (.exe) file will create. and that is an executable software.


				When we run a .exe file through any IDE, that IDE will responsible to run
				that file.

				When we run a .exe file from other folder, Operation System will responsible
				to execute that file.
*/



/*		Arguments in main() function:
 	 	*		Take something nature of function
 	 	*		Actual and formal argument.
 	 	*		main() may take arguments.
 	 	*		Who calls main().
 	 	*

 	 	*	We can pass arguments to the main() function, only when we are calling our
 	 		program using command line.
 */

#include<stdio.h>
/*
int main()
{
					//here We are defining the main() {	} like fun(int a){ }.
					//main() does not run untill it will not call from caller. LIke fun(a),
					// when we pass the argument 4 in fun(4), it will get run otherwise
					//will not.
					//Same as main()also will not run if it is not called. So operating
					//system will call the main() thats why main() is executing.
					//and it does not pass any argument to main().
				//If we want to pass argument in main function, need to execute it from cmd.

	printf("Hello \n");
	fun(4);				//Actual Argument
}

void fun(int a)			//Formal Argument.
{
	int a;
}
*/

int main(int argc, char* argv[])	//1st arg. no.of args,
		//Operating system will pass no.og args in 1st arg(In no. of args,1st arg value
		//will be file name itself, from the 2nd arg value, we need to pass ).
		//and In 2nd arg, Its an Array of char pointer. So we can pass address of string
		//values.. Like:
		//int main(3,"\...path\..\CmdLineArg.c","2","3");
	//Here in st arg string address is"cmdLineArg.c, 2nd is 2 and 3rd is address of string 3.

{
	int i;
	for(i=0;i<argc;i++)
	{
		printf("\n%s\n",argv[i]);
	}

}
