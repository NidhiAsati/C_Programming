/*
 * Union is similar to structure, except it allows you to define variables, that
 * shares storage space.
 *
 *
 * defining union means creation new data type.
 *
 *
 *
 *
 *
 */

/*union item
{
	int x;
	float y;
	char c;
};
union item i1;
*/



/* struct item
{
	int x;
	float y;
	char c;
};
struct item i1;
*/



// both are same, but structure consumed the memory for each variable seperately.
//whereas union consumed the memory for, which is the biggest in size  ofdata type.


/* if we want to store the student information, we can use union.
 * if we want to take input from user, whether it is int, float or char..we can
 * go for union.
 */



///////////////////Union Program///////////////////////
#include<stdio.h>
union Item
{
	int x;
	float y;		//it will consume only 4 byte memory.
	char z;
};
int main()
{
	union Item i1;
	i1.x= 5;
	printf("\n %d",i1.x);	//5
	i1.y=34.5;
	printf("\n %d",i1.x);	//
	i1.y=34.5;
	printf("\n %f",i1.y);	//34.50000
	i1.z='a';
	printf("\n %c",i1.z); 	//a
	return 0;
}	// In above, values has printed, but values are overwriting, y value will
//		over write into x, then z value will overwrite. if we print again x value
	// after assiging y value, it will give 0 like above:

	//it will keep one value at a time in created block,
	//we assign value to y, it will copy
	//y value to that block only. and that memory block only execute with the name of y.
	//because we have only 4 byte of memory block.
	//we can execute one operation at a time.


