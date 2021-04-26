/*
	PROGRAM TO FIND THE SUM OF GIVEN AMOUNT OF NUMBERS
	AUTHOR : AISHWARYA K P
*/
#include<stdio.h>
void main()
{
	int n,c,sum=0;
	printf("Enter the count of the numbers to be added : ");
	scanf("%d",&c);
	printf("Enter the numbers to be added : ");
	while(c!=0)
	{
		scanf("%d",&n);
		sum=sum+n;
		c--;
	}
	printf("SUM = %d\n\n",sum);
}
