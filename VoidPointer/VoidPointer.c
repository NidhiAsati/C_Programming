/*
 * VoidPointer.c
 *
 * Void Pointer :	Void *pointer
 *
 * 					int *p;		: 	It will store address of int variable.
 * 					float *p;	:	It will store address of float variable.
 *
 * 					So void *p;	: 	It will store address of any data dyte variable. its
 * 									also called generic pointer, Means it is generalized.
 * 									which is hold the address of any type.
 */
// When we dont know which type of result can come, we should use void pointer.
int main()
//{
//	int a;
//	float b;
//	int *p;
//	p=&a;

{
	//Void Pointer//
	void *p,*q;	//its a void(generic) pointer./
	int a;
	float b;
	p=&a;		//We can put any data type address.
	q=&b;		//We can put any data type address.

	//But if we want to access the value:
	//like: *p=67; We can not. We have to type cast it(p) to a particular data type.
	//(int *)p=10;	//here (int *) represent to the address of int block. For de.referencing
					//we need to put one (*) before that int block address.

	*(int*)p=20;	//If p is pointed to int type variable.
	printf("Value of p=%d\n",*(int*)p);			//O/P:  20
	*(float*)q=40.0;
	printf("Value of q=%f\n",*(float*)q);	// 40.0

}


