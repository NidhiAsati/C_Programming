/*
 * PointerIncrement.c
 *
 *
 */
#include <stdio.h>

int main()
{

    int a[5]={10,20,30,40,50};
    int *p;

    p=&a;
    //or
    p=&a[0];
    //or
    p=a;
    printf("value of &p= %p\n",&p);
    printf("value of *p= %d\n",*p);			//O/P: 10
    printf("value of ++*p= %d\n",++*p);		//O/P: 11,	Take data and increment data
    												   //It will read right to left.
    printf("value of *p++= %d\n",*p++);		//O/P :11,	Read data then move pointer to next.
    printf("value of &p= %p\n",&p);
    printf("value of *++p= %u\n",*++p);		//O/P: 30,	Move pointer to next and read data.
    printf("value of *p= %u\n",*p);			//O/P: 30,	Value at pointer.
   // *p++;
    //*++p;

    return 0;
}



