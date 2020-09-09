/*
 * 	*	TypeDef is a keyword.
 *
 * 	*	We can use typedef to give new name to an existing data type.
 *
 * 	*	By convention upper case letters are used for these definitions to
 * 		remind the user that the type name is really a symbolic abbreviation.
 * 		But we can use lower case also. like below
 *
 * ex.	typedef int LENTH;	// now we can use LENTH as a data type, which is
 * 							just same as int. like
 *
 *		LENTH x, y;			///OR//
 *
 *		typedef int lenth;
 *
 *
 *
 */
	/////////////////Program typedef with structure ////////////////
#include<stdio.h>
//struct student{
// if we want to use typedef, need to write typedef keyword before struct.

//typedef struct student	// infect if we want, we will not give any name,
						// So that it will take only one name, which is defined
						//using typedef. So we can write like below also:
typedef struct
{
	int rollNo;
	char name[20];
	int age;
}STUDENTINFO;	// Here we need to give any name for that structure.

int main()
{
	STUDENTINFO s1;
	s1.rollNo=213;
	printf("roll no %d",s1.rollNo);
	printf("Name is %s\n",strcpy(s1.name,"Nidhi"));
	printf("age is %d\n",s1.age=20);
}


