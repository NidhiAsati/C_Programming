
//To find String lenth and reverse string
#include<stdio.h>

void revstr(char *name);

int lenth(char *p)	//whenever we call lenth(), need to pass address of string, and pointer
// p will hold the address.


/*same as
 if char c[] = "computer"; then
		strlen("computer"), here computer is an address of 1st block of string,
		and it strlen will count 1st block address value lenth.
		outpu is 8
*/
{
	int i;
	for(i=0;*(p+i)!='\0';i++);		// There is nothing in for loop body,
	return i;
}

void revstr(char *name)
{
	int len, i;
	char tmp;

	len=lenth(name);
	for(i=0;i<=(len/2);i++)
	{
		tmp = *(name + i);
		*(name + i)= *(name+len-1);
		*(name + len-1) =tmp;
		len=len-1;
	}
	//*(name+5)='\0';
	//return name;
}
int main()
{
	char s[]="yogesh";
	int l;
	//char *r;
	printf("Lenth of string1=%d\n",lenth("computer"));// here computer is an Address of
	//1st block of char[] array, so we can write this also. only is function return the value

	l=lenth(s);
	printf("Lenth of string=%d\n",l);

	revstr(s);
	printf("reverse string = %s\n",s);
}
