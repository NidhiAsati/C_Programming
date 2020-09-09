/*
 * main.c
 *
 *  Created on: 28-Jul-2020
 *      Author: yogesh
 */
#include<stdio.h>
int main()
{
	int a,b,sum,choice;


		printf("\n1 for addition");
		printf("\n2 for even_odd");
		printf("\n3 for series");
		printf("\n4 for exit\n");
		while(1)
		{
		printf("\nEnter choice");
		scanf("%d",&choice);


	switch(choice)
	{

	case 1:

		printf("enter 2 no.\n");
		scanf("%d%d",&a,&b);
		sum=a+b;
		printf("\nsum is %d",sum);
		break;
	case 2:
		printf("Enter a no.\n");
		scanf("%d",&a);
		if(a%2==0)

			printf("%d is an Even no.\n",a);
		else
			printf("%d is an odd no.\n",a);
		break;
	case 3:
		printf("Enter a no\n");
		scanf("%d",&a);
		for(b=1;b<=a;b++)
		{
			printf("%d",b);
		}
		break;
	case 4: exit(0);

	default:
		printf("\n invalid choice\n");
	}
}

}
