/*
 * DanglingPointer.c
 *
 * All function will get the memory seperately.
 *
 *
 */
int main()	//Here main() will get the memory, when i comes into RAM
{
	fun();
}

fun()	// Fun() will also get the memory, when it is called and comes into RAM.
{
	int *p;		//Scope of *p is inside the fun()
	{
		int a=5;		//Scope of a is inside the *p block
		p=&a;
		*p=8;
		printf("a's value=%d\n",*p);
		printf("Address of a=%p\n",p);
	}			//So here address of a will be stored in pointer p.If after executing
				//last statement of the block, variable a will destroy, and memory
				//of that block will also be destroy.But pointer *p will not be destry,
				//becoz it has a life throughout the fun().(Outside of this block also).
		printf("a's value=%d\n",a);	//We can not access variable a directly from outside
									//the block.
		printf("*p's value=%d\n",*p);// But we can access variable a using pointer(indiractly).

		printf("Address of a=%p\n",p);

				//So *p is holding the same address of such a variable, which is
				//already destroyed. So p is pointing to that memory space,which is not valid.
				//this type of pointer is called dangling pointer.
				//So here p is a dangling pointer.
				//P is holding an invalid address, To solve this, We need to declare as a
				// NULL pointer at last.
		*p=NULL;
}
