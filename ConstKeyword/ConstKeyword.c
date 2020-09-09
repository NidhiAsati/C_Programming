/*
 * ConstKeyword.c
 *
 * 		*	Const is a keyword in C language.
 * 		*	Const is a qualifier.
 *
 * 		*	The qualifier const is applied to the declaration of any variable to specify
 * 			that its value will not be changed.
 *
 * 		*	History of Const:
 * 								Const was not there in early C, the concept is borrowed
 * 								from C++.



 	 	 *	The keyword const can be applied to any declaration, including those of
 	 	 	structures, unions, enumarated types and typedef names.

 	 	 *	Applying it to a declaration is called qualifying the declaration.
 	 	 *	Const means somethin is not modifiable.



 	 *	Pointer to Const :
 	 	 	 	 	 	 	*	const int *p;
 	 					 		int const *p;

 	 *	Const Pointer	:	*	int *const p;


 */

//main()
//{
//	const int a=5;
//	printf("%d\n",a);
//	a++;				// IT will show error. Read only variable.
//	printf("%d\n",a);
//}

main()
{
	const int a;	//without initialization it will take garbage value, which will be
					//a constant. So const var. will be initialize at the time of declaration.
	printf("%d\n",a);	//garbage value.
	//a++;				// IT will show error. Read only variable.
	//printf("%d\n",a);

// We can change const value using pointer
	const int x=5;
	int *p;
	p=&x;
	printf("x=%d\n",x);		//5
	++(*p);					//6 becoz we are not directly using by variable name x ,
							//which is a constant.
	printf("x=%d\n",x);



// Const pointer	: We can not change value of pointer.(p++I is not possible.

// Const to pointer	: Here pointer is not constant, We can not change the value,
					  //to which pointing the pointer. (++(*p)) is not possible.
//Const Pointer to Const	:




	/////const to pointer example////////////
	const int y=5;
	const int *q;	//Pointer to const	/
	//
	int const *q;

	q=&y;			/// In q garbage value will eb stored,We can change
					// Pointer value

	printf("y=%d\n",y);		//5
	++(*q);					//Error : Read Only variable.
	printf("y=%d\n",y);



/////////////////const pointer example/////////////////
		const int z=5;
		int *const r;	//Const Pointer, we can not change pointer value, becoz garbage value
						//will be stored in pointer r.
		r=&z;			//error




		//If we want to change the pointer value, we need to assign something
		// to const pointer like...we can assign address of variabl(z) to the pointer r.

		int *const r=&z;	//	We can do like this

		printf("z=%d\n",z);		//5
		++(*r);
		printf("z=%d\n",z);		//6
		++r;
		printf(z="%d\n",z);		//Error msg






		//////Const Pointer to Const example//////////////
	const int b=5;
	const int *const ptr=&b;
	printf("b=%d\b",b);
	++(*p);
	printf("b=%d\n",b);//error //We can not chage b's value as well as ptr.

	//When we want nothing will be change in  data, we can daclare like above.


}





