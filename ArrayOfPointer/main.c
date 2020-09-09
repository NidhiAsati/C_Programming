/*
 * pointer when incremented, always pointing to immediattly next block of its own type
 */


#include<stdio.h>
int main(){

	int i, A[5], *p;
	p=&A[0];
	p=p+1;
	printf("%d ",p);
	printf("\nEnter 5 no");
	for(i=0;i<=4;i++)
	{
		//scanf("%d",&A[i]);


		///////////  Or	//////////
		scanf("%d",p+i);
	}

	for(i=0;i<=4;i++){
		//printf("%d ",A[i]);


		///////////////	OR 	///////////
		printf("%d ",*(p+i));
	}
}
