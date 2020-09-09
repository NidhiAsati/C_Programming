/*
 * BitFieldConcept.c
 *
 *  Bit Field:
 *  			* 	Bit fielda are used to consume memory effeciently, when we know that the value of a field
 *  				or group of fields will never exceed a limit or is within a small range.
 *
 *  			*	It can be used in structure and union.
 */


//Turbo software is a 16 bit software.In turbo c,int is 2 byte.

/*struct date
{
	unsigned int d;
	unsigned int m;
	unsigned int y;
};
int main()
{
	struct date d1={22,1,2016};	//the variable d1 of type 'date' takes 12 bytes on a compiler,
							//where an unsigned int takes 4 byte.
	printf("Size of d1 is %d",sizeof(d1));	//output : 12 byte. In turbo c it will be 6 byte.
*/


/*	We know that :
						*	The value of d is always from 1 to 31. //Here d is taking 4 byte(32 bit). In Binary
							31 = 11111. So only 5 bits will be used.
						*	Value of m is 1 to 12.//m is taking 32 bit. In binary 12 is 1100. SO only 4 bits
						 	 will be used.

						*	We can optimize the space using bit field.
*/


struct date1
{
		unsigned int d:5;
		unsigned int m:4;
		unsigned int y;
};
int main()
{
struct date1 d2={22,1,2016};	////The variable d2 of type 'date' takes 8 byte on a compiler, where an
							//unsigned int takes 4 byte.
	printf("Size of d2 is %d",sizeof(d2));	//IT will get 8 bytes, 4 byte for y and one more 4 byte block
											//for d and m.In other 4 byte, 5 bits from right to left for d and next 4 bits from right to left
											// for m.

}




