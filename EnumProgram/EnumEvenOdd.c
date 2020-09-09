/*
 * UnionEvenOdd.c
 *
 *  Created on: 01-Aug-2020
 *      Author: yogesh
 */

enum boolean
{
	false,true
};

/*
int isEven(int x)
{
	if(x%2==0)
		return(1);
	else
		return(0);		// here we need to remember that 1 means true and 0 means
						// false.
}*/



//	///////////////////OR/////////////////

//// Now with the help of enum/////////

enum boolean isEven(int x)
{
	if(x%2==0){
		return(true);
	}
	else
		return(false);
}					//Here readability is improved.

int main()
{
	int a;
	enum boolean result;
	printf("Enter a number\n");
	scanf("%d",&a);
	result=isEven(a);
	if(result==true){		// we can write directly true also
		printf("Even Number");
	}
	else
		printf("Odd Number");

	return 0;


}
