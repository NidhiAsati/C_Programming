/*
 * there are three type to create user defined data type
 * structure
 * union
 * enumerator	//somewhere same as above.
 *
 *	1.	Enumerator is a user defind data type. // not primitive data type.
 * 		it gives opportunity to invent own data type and define what values
 * 		the variable of this data type can take.
 *
 *  2. 	Internally compiler treats the enumerators as integers.
 *
 *  3.	Each value on the list of permissible values corresponds to an integer
 *  	starting with 0. In below example Jan is stored as 0, Feb is stored as 1...
 *  	Dec is stored as 11.
 *
 *  4. 	We can initialize enumerator with different integer value. like
 *  enum month
 *  {
 *  	Jan=1;
 *  };
 *
 *	5.	We can write any program in C without the help of enumerations. But
 *		emumeratios helps in writing clear codes and simplify programming. Also
 *		readability will improve.


 */

enum month
{
	Jan=1, Feb, Mar, Apr, May, June, Jul, Aug, Sep, Oct,Nov, Dec

	//Jan=1, Feb, Mar, Apr=8, May, June, Jul, Aug, Sep, Oct,Nov, Dec // we can
	//write like this also from May onwords it will countinue with
	//respect to apr 9, 10...


};	// here we declare list of words, these are possible values,
	//which will stored in month data type variable.
	// Also we initialize the value with integer.

int main()
{
	enum month m1,m2,m3;
	/////Internally compiler treats the enumerators as integers.
}



//Boolean enumerator////

enum boolean 			//(creating data type)
{
	false, true
};	//
