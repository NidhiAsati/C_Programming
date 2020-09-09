#include<stdio.h>
#include<string.h>

void fun(char *a);

int main()
{
	char *p="Nidhi";
	fun(p);
	printf("Name of String p=%s\n",p);
	return 0;
}

void fun(char *a)
{
	char *w="YOGESH";
	*a=*w;
    //strcpy(w,a);
	//printf("Name of String a=%s\n",*a);

}
