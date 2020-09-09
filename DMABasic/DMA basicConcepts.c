/*
 *
 * SMA	- Static Memory Allocation
 * DMA - Dynaic Memory Allocation
 *
 *
 */
#include<stdio.h>
int main()
{			// Static memory aloocation
	int i;		//SMA
	float a;	//SMA		//Declaraton statements
	int A[4];	//SMA

	// also known as compile time allocation. But its not mean memory will
	// allocate into compile time
	// It means it will deside how much memory variable will get at the run time.
	//All will deside into compile time..we can not chage in between.
	//In compile time code convert into object code.
	//Actual memory it will get in run time.



	//if any situation, we dont know how many no. (when too many no needs)
	//will need for the program,
	//So we will unable to deside, how many variables will it needs.
	//then we use DMA at run time.
	//Here we will not write decration statement.


	//There are 4 function for DMA:
	//	malloc
	//	calloc
	//	realloc
	//	free


	//malloc takes one argument.
	//malloc has not any data type, it will create block in memory
	//for given number size. like
	//	malloc(6)	//it will create 6 byte block in memory.


	// malloc return address of that block which is created.
	// so we need to take pointer variable to hold address of block.

	float *p;	//SMA


	//(void *)=malloc(6);	//return type of mallco is void pointer,becoz malloc
							//does know the type of created block.

	//but we have float pointer, so need to type cast (void *) to (float *)
	p=(float*)malloc(6);
	*p=3.45;//it will assign the value 3.45 into that block addres.

	//but if pointer value change, then this block will never used. But it will consume memory.

	//so progrmmer needs to free that memory
	printf("%f",p);




	///////////////////////Calloc///////////////////////////


/*	calloc is same as mallco used to take memory at run time.
	But it takes 2 arguments. 1st argumet state how many block need to create,
	and 2nd argument stating that the size(in bytes) of the per block.

	////////////////////Differences////////////////////
	 * malloc creates only one block, but using calloc we can create multiple block.
	 * malloc creates one block,calloc create array of block.
	 * malloc block has by-default garbage value, but calloc blocks have zero(0) by-default.
	 *
*/
	int *ptr;	//ptr is a static variable.
	ptr = calloc(5,2); //here it will create 5 block,
						//and each block size is 2 byte.
	//calloc will return address of 1st block

	*(ptr+0)=47;//it will assign the value in 1st block of array.
	*(ptr+1)=50;






	/* sometimes we need to change the size of the block, which is created
	 * using malloc() or calloc() function, then need to use realloc() function.
	 *
	 * realloc() takes the address of that block, and create new block.
	 * realloc() return the address of newly created block.
	 *
	 *
	 *
	 *
	 *
	 * 	 */



	//syntex :
	//			void* realloc=(void *block,int size);

	int *ptr1, *ptr2;

	ptr1=malloc(8);
	ptr2=realloc(ptr1,6);






	/* free(): is used to free the memory, which is used for the creating the block
	 * using malloc or calloc.
	 *
	 */




	void fun()
	{
		int x;
		int *ptr3;
		ptr3=(int)malloc(8);
		//....
		//.....

		free(ptr3);	//here memory of ptr3 will not free,bcoz its static memory allocation
					// but in ptr3, we have address of the created block, so that block
					//memory will release.


		/* In static memory allocation, if variables created inside the function,
		 * after execution of that function, memory will automatically release.
		 * means life time of that variables inside that block.
		 * but in DMA, memory can not release after execution of function also.
		 *  we need to release using free()after writing necessary statement.
		 *  otherewise In DMA memory will release after the program execution.
		 */

		//In fun() also.... ptr() has static memory, after executing the block of code,
		//it will destroy and that block memory will not release.
		// Now who hold that block address.
		//we dont have any poiter to hold that block address.
		//we can never use that memory.

		//In our program some part of the memory is free area and some of consumed
		// area, but here that block memory is in consumed area,
		//but it never can be used and that is called memory leak.

	}

}



