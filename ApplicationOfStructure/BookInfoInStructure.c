/*
 To store (Library management) : Book information
 Function in structure// Array in structure
 */

#include<stdio.h>
struct book
{
	int book_id;
	char title[20];
	float price;
};
struct book input()	// book is return type of input()
					//like normal function we need to write like this
{
	struct book b;	//creating one local variable of type book
	printf("Enter book_Id, title and price");
	scanf("%d",&(b.book_id));
	fflush(stdin);	// to flush input buffer data
	gets(b.title);
	fflush(stdin);
	/*gets() and scanf() can not take data directly.
			it goes to input buffer
			then it will go to scanf().
			when scanf() used, it will look into input buffer, most of the time buffer
			is empty, then scanf() will run an another function to take input from keyboard.


			But if data is present into input-buffer, it will not give the
			permission to  take input from keyboard.

			thats why gets is not giving permission to take fresh input (title),
			bcoz input buffer is already having some data.
		*/
	scanf("%f",&(b.price));
	return(b);		//returning structure

}

void display(struct book b)	// b1's value received in display()from main ()
{
	printf("%d %s %f\n",b.book_id, b.title, b.price); //already existing data
			// will print in the title bcoz of 2nd scanf, and it is
	// float type. theys why it is giving 0.0000.
	//becoz gets did not permited to enter data.
}
int main()
{
	struct book b1;// b1 is a variable in which 3 variable are there
	b1=input();	// here input is returning b1, which is type of book
	display(b1);	// passing b1's value to display
return 0;
}



