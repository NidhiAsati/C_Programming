/*
 * Pre-processorCommands1.c
 *
 *  	*	As a file being compiled, we can use these commands to cause
 *  	sertain lines of code to be included or not includes(for compilatio).
 *
 *  	Pre -Processor Commands:
 *
 *  	*	#if,	#else,	#elif,	endif
 *  	*	#ifdef,	#ifndef
 *  	*	##	(double hash)
 *
 *  	//Use of #ifdef and #ifndef

 *	#ifdef macro :- If, this macro is defined.
 				:-If the macro has been defined by a #define statement,
 				  then the code immediately following the command will be compiled.

 *	#ifndef :- If the macro has not been defined by a #define statement, then
 	 	 	 	  the code immediately following the command will be compiled.

 	 ##		:- *  The ## operator is used with the #define macro.
 	 	 	   *  ## operator concatenetes what's before the ##, with what's
 	 	 	   	  after it.
 */



//Use of #if, #else, #elif, endif
#include<stdio.h>
#define COUNTRY India			//we set COUNTRY=="india"
#if COUNTRY=='Pakistan'			// We cant use parantheses in in this #if...
	printf("PAkistani Rupees");

	//here if COUNTRY=="Pakistan condition will check by the pre-processor.
	//If condition is false, next statement(printf) will not be compiled like normal
	//if_else(conditional statement)

	//In normal if_else , both statements will be compiled,
	//At run time it will deside which statement has to be executed.(if part
	//or else part).

#elif COUNTRY=='Bangadesh'
	printf("TAKA");
#elif COUNTRY=='NEPAL'
	printf("NEPALI Rupees");
#else						//only thsis printf will go for the compilation.
	printf("Indian Rupees"); // if "india" is in first if contion. pre-processor
	//will not check other condition,and 1st statement wil go for compilation.

#endif



//Use of #ifdef and #ifndef


//#define COUNTRY India

#ifdef COUNTRY
	printf("%s is a great country","COUNTRY"); ////if macro is defined, printf
	//statement will compile, if it is not defined, it will not compile.
#endif
#ifndef COUNTRY
		printf("I love my nation"); //if macro is not defined, it will compile,
		//otherwise it will compile.
#endif




		//////////////Use of ## operator	/////////////
#define ACTION(a,b) a##b+a*b
int main()
{
		printf("%d",ACTION(3,4)); // it will concate 3 and 4 like 34. after that
		//the statement will be 34+3*4. and result will be =46
}
