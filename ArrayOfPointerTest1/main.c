/*
 * Sorting
 */


/*
 *
 * Pointer when incremented, always pointto immediately next block of its
 * own type.
 *
 *
 */
#include<stdio.h>
void input(int *);
void display(int *);
void sort(int *);

void input(int *p)

{
	int i;
	printf("Enter 5 no\n");
	for(i=0;i<=4;i++)
	{
		scanf("%d",(p+i));
	}
}
void display(int *q)
{
	int j;
	for(j=0;j<=4;j++)
	{
		printf("%d ",*(q+j));
	}
}
void sort(int *k)	//We can take same name variable like p p p, but all variables
//are different from each other

{
	int round, t, i;
	for(round=1;round<=4;round++)
	{
		//Here we are Using Bubble sort, in which we can compare 1st element with
		//2nd element,then 2nd to 3rd...

		for(i=1;i<=3;i++)
		{
			if(*(k+i)>*(k+i+1))	// *(p+i) is same as a[i] //   *(p+i)=a[i]
				t= *(k+i);
				*(k+i)=*(k+i+1);
				*(k+i+1)=t;
		}
	}
}
int main()
{
	int a[5];
	input(a);
	display(a);
	sort(a);
	display(a);
}

