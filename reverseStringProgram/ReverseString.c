#include<stdio.h>


char* revstr(char *stradr);
char* revstr(char *stradr)//its taking address of string and returning the address
//	of reverse string
{
	int len, i;
	char tmp;
	for(len=0;*(stradr+len)!='\0';len++);

	for(i=0;i<len/2;i++)
	{
		tmp = *(stradr+i);
		*(stradr+i) = *(stradr+len-1-i);
		*(stradr+len-1-i)=tmp;
	}
	return(stradr);

}

int main()
{


	printf("reverse string = %s\n",revstr("computer"));

}
