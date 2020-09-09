/*
 * WildPointer.c
 *
 *
 *
 *When we run any program, some memory will allocate to that program. But suppose we
 created a new variable,form that memory some particular area will be allocated to that
 variavble. and that area will be called as consumed areaa whereas remaining space will
  be called as free area.
 So position of 1st byte of consumed area is called base address.

*/

int main()
{
	int x;

	int *p;//	uninitialized or Wild Pointer.	//Pointer is holding address of unown
												//variable(garbage variable)

	/*here pointer p will be initialise with garbage value, which will be address
	 	 	 of some other variable of frre memory area or consuumed area, We dont know it.
			 * So total memory area wil be fixed for progrm, but ratio of free and
			 * consumed memory area is changing time to time., becoz when we create some variable,
			 * it will consume memory from free area and some times we create variable inside function,
			 * after block execution, it will destroy and memory will release.
			 */

	*p=4;	// 4 will go to(write) into known address of free area,which is not accessble.
			//	SO its called illegal access area.

	//Now if we want to assign x variable address to p, but its late, becoz value is already assigned
	// to unknown address. Be carefull, always initialize the pointer at the time of
	//declaration.
				// To solve this problem we have NULL pointer also.


	// NULL pointer : It is a Macro. Already defined in <stdio.h> header file.
	//Like : #define NULL 0

	int *p=NULL;	//It mens pointer p is pointing to 0 address, In that address NULL value
					//is stored, Its aslo in free area.NULL is a special value.
					//which means,pointer is not pointed to any number. and illegal access
					//will not be happen.

				//We can initialize pointer with NULL at the time of declaration or after
				// declaration also.(Anywhere in program).


	p=&x;
