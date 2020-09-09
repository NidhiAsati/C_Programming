

// Swapp two no.
//* Call by reference is same as call by address

//* When formal arguments are pointer variable, it is call by reference

//* Reference means address




#include<stdio.h>
void swap(int *,int *);
int main(){
	int x,y;
	printf("Enter 2 no\n");
	scanf("%d%d",&x,&y);

/* 			Why we use & in scanf()?
 *
 * Here x and y are main function variable,
 * scan() need toput value in x and y,
 * But they both are different functions.
 * scanf() cant put values in main function variable x and y.
 * So that scanf() will also have pointer variable to take address of x and y.
 * if we can not write & in scanf, then the value of x and y will pass to scanf,
 * otherwise x and y's garbage values will be passed to scanf()
 *
 * but with the help of address, scanf()
 * use their varable, means x and y needs container not content.
 * same as swap() will also take address of x and y
 *
 *
 * scanf needs container not contents.
 */

	swap(&x,&y);		//Passing address// Actual Arguments
	printf("x=%d y=%d",x,y);



}
/*void swap(int a,int b){		// here value of x and y will be copied in a and b
 * int t;
 * t=a;
 * a=b;
 * b=c;
 *
 * Now data has swapped in a and b, but not in x and y
 * if we do any changes in a and b, it will not reflect to x and y
 *
 *
 * Now we are thinking of return of value, function can not return two values,
 * so its also not possible
 *
 * Here swap function needs to inter-change data of x and y
 *
 * So we can pass the address of x and y to a and b.
 * So pointer can hold the address, we can use pointer here
 *
 *
 */

void swap(int *a,int *b)	//Formal Arguments

{
	int t;
	t=*a;			// here *a and *b is pointing to value of x and y(Bcoz
					//pointer means value at address
	*a=*b;
	*b=t;


}

