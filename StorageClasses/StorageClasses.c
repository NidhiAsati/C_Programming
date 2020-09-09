/*
 * StorageClasses.c
 *
 *  PROPERTIES OF VARIABLE:		Name of variable, size of memory block, Type of content////
 *  Other Properties:
 *
 *  	*	Default value
 *  	*	storage	// where memory will be allocate, CPU register or RAM
 *  	*	scope	// block,where we can access that variable
 *  	*	life	// life of the variable(creation to destroy
 *
 *  	Above 4 properties also describe after seening the storage class name.
 *
 *
 */

/* Declaration of variable statement are 4 type:
 * 		Storage classes:
 * 						*	automatic
 *						*	register
 *						*	static
 * 						*	external
 *
 *
 */

/*

	Storage Class	Keyword		Default value		Storage		Scope					Life

 * 	Automatic		auto		Garbage				RAM			Limited to the block	Till the execution
  																in which it is	 		of the block in
  																declared.				which it is declared.

 * 	Register		register	garbage				register	Same					Same

 * 	Static			static		0(zero)				RAM			Same					Till the end of program.

 * 	external		extern		0(zero)				RAM			Global					Same

 */

// Automatic storage Class:
#include<stdio.h>
void f1();
void f2();
int main()
{
	int x=5;			//main function block		//Bydefault it will take automatic storage class.
	printf("%d\n",x);	//output 5
	{					//block inside block
		int x=2;
		printf("%d\n",x);	// output :2 // becoz the variable which is more localel, will get preference.
	}
	printf("%d\n",x);	//5




//Register Storage Class	:Variable will get the memory in RAM. and it will go to CPU(in instruction register),
//							for execution.next variable will also go to CPU. after that using both variable calculation
//							will happen in ALU.

//							So it will take time to transfering data more than execution. and some time CPU
//							will get also empty. Means CPU utilisation is not happen properly.
//
							//So if any variable is using again and again. We can declare as register. So that
//							may be that variable will get the memory in CPU register itsef.

//							It depends on various parameter. If register is using by other process, variable
							//will not get. Or if variable is not int or char type. like if variabe is float
//							or double type, it will not get.
//
							//Generally register will allot for int and char data type. otherwise for other data
							//type automatically it will cgange in auto storage class.. even we willalso dont
//							know,where memory will get allocated.


	//RegisterStorage Classe:
//int main()
{
	register int x=4;
	int y;
	y=x++;
	x--;
	y=x+5;

}



//Static Storage class:
//In auto storage class
//int main()

	f1();	//when f1 is called, variable i will get initialise with 0, then i++(1). will print on the screen.
			//After that i variable will destroy.
	f1();	//Again here also, when f1 is called, variable i will get initialise with 0, then i++(1)will
			//print on the screen. After that this i variable will also  destroy.
			//So we will get i=1 i=1 on the screen.


	f2();
	f2();

}


// If we make same progrm with static storage class.
void f1()
{
	int i=0;		//bydefault it is auto, and default value is garbage value, that's
					//why initialise with 0.
	i++;
	printf("i=%d",i);
}



void f2()
{
	static int i;	//Bydefault it wil get initialise with 0.
	i++;
	printf("i=%d",i);	//1st time when f2 is called, it will automatically initialise
						//with 0, after incre-menting it will print 1.

						//But Variable will not destroy yet also. it will exist till the program.
						//when 2nd time we call the function f2(), i existing value is already 1. then it will
						//increment by 1 and print 2. At the end of program, it i will destroy.
}



//External Storage Class:
int x;			//it is an external storage class variable. Also known as global vaiable. We can access anywhere
				// in program.
int main()
{
	printf("x=%d",x);	// It will print 0 bydefault.
	f3();
	printf("x=%d",x);	// output: 1
}

void f3()
{
	//int x=5;				//if we take x as a local variable, it will print 6, then variable will destroy.
							// then in main function 2nd printf will again print 0.
	x++;
	printf("x=%d",x);		// output: 1	//f1 will print x value. x is not destroy yes. it will again go
							// to the main function and print x value again.
}



/*In above example we wrote a global variable declaration, above(outside) the main().then compiler will get to
  know that, the x variable is created.
  But what happened, if we would have created the variable after the main().
  It will show error msg. undefind variable x.
*/

/*	If we created a variable outside the function and want to use in any function. then in that function we
 * need to write extern keyword with variable name.then compiler will get to know, that
 * yes there is a variable created externally and we can use that variable in this function also
*/


int main()
{
	extern int x;		//If we will not write extern keyword, it will show error and will not print x's value.
	printf("x=%d",x)	// It will print 0 bydefault.
	f3();
	printf("x=%d",x);	// output: 1
}
int x;
void f3()
{
	//int x=5;				//if we take x as a local variable, it will print 6, then variable will destroy.
							// then in main function 2nd printf will again print 0.
	x++;
	printf("x=%d",x);		// output: 1	//f1 will print x value. x is not destroy yes. it will again go
							// to the main function and print x value again.
}
