/*	structure is a way to group variables
 * structure is a collection of de-similar as well as similar elements.
 * Defining structure means creating new data type.
 */


// In structure one variable is a collection of variable



/////////Definition of structure/////////////

/*struct data-type-mane
 * {
 *
 * 	member variable declaration
 *
 * 	};
 */


//// No menory is consumed(reserved) for definition of structure.

///////////Example/////
/* struct date
 * {
 * 		int d,m,y;		/////////here we are making(difining) date datatype only,
 * 						////not creating variable
 * 	}
 * 	///defining a data type(structure)/////
 * 	//////////////////////here it will not consume any space in memory.
 * 	struct student
 * 	{
 * 		int rollNo;
 * 		char name[];
 * 		int age;
 * 	};
 * 	void main()
 * 	{
 * 		float i, j;	/// It will reserve 8 byte memory, becoz we r creating variable
 * 					/// for defined datatype.
 *
 *
 */

// structure can defined inside the fuction as well as outside the function. Means
	/// global or local.
#include<stdio.h>
struct date
{
	int d,m,y;		//defining structure(datatype)
}d2,d3;	//	//declaration of a date type global variable
					/////OR////////
struct date d1;	//declaration of a date type global variable




int main()
{
	struct date today,d4; //declaration of a local variable
	//here struct is a keyword, date is data type and today is a variable.

	//variable initialization
	struct date yesterday={12,07,2020}; //it will initialize values in same order values like
										// declaration.

	///we can declare a variable once then can initialize after like
	today.d=17;
	today.m=07;
	today.y=2019;	//memeber variables does not have their own identity.

	//Now we want to copy today's data in yesterday variable
	yesterday.d=today.d;
	yesterday.m=today.m;
	yesterday.y=today.y;
					//////OR////
	yesterday=today;		//all values will be copied correspondingly
							//becoz both are same data type(date) variable


	printf("enter today's date");
	scanf("%d %d %d",&yesterday.d,&yesterday.m,&yesterday.y);
	printf("Date : %d/%d/%d",yesterday.d,yesterday.m,yesterday.y);



}
