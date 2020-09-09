/*
 * PreProcessor Commands:
 *
 * 	*	The #define directive defines an identifier and a character sequence( set
 * 		of characters), that will be substituted for the identifier each time it
 * 		is encountered in the source file.
 *
 * 	*	The Identifier is referred to as a macro name and the replacement process
 * 		as macro name.
 *
 *
 * 		Syntex :
 *
 * 		#define macro-name char-sequence
 *
 * 	*	#undef : It is used to undefined macros
 * 	Example :
 */

/*#define CLOSE 0
	...
	....
	.....

 #undef CLOSE	// After using if we want to close macro, we can write like this.
*/


#define PI 3.14				//here PI is a macro-name
#define MSG "Hello"				//MSG is a macro anme

#define squre(s)	s*s
int main(){
	int r,a;
	printf("Enter radius\n");
	scanf("%d",&r);
	a=PI*r*r;
	printf("Area of circle= %d",a);


			//////// Defining macro as a function ///////////
//syntex	:  #define macro-name(args)	char-sequence(statements)
			// in macro we pass only args without data-type.


 # define fun(a) a<0?(-a):(a)		//

  printf("ABS of -1 and 1: %d%d\n",fun(-1),fun(1));



#define SUM(a,b)	a+b
#define	PRODUCT(a,b) a*b

  printf("sum of 3 and 4 is %d\n", SUM(10,4));				//14
  printf("PRODUCT of a and b is %d\n", PRODUCT(3,4));		//12
  printf("PRODUCT of a and b is %d\n", PRODUCT((3+2),(4-6)));	//-10

  printf("PRODUCT of a and b is %d\n", PRODUCT(3+2,4-6));		//5
  //It will take args as it is. like 3+2 in a and 4-6 in b not( 5 and -2)
  //For that we need to write a and b in a seperate bracket like ((3+2),(4-6))
  // or we can write directly char-sequense in seperate brackets.

#define	MUL(a,b) (a)*(b)
  printf("Multiplication of a and b is %d\n", MUL(3+2,4-6));		//-10



  int s=squre(5);
  printf("squre of no. is %d",squre(4));



/////	#	undef	////////


}

