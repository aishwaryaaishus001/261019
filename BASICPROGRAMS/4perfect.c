/*
	PROGRAM TO PRINT THE FIRST 4 PERFECT NUMBERS
	AUTHOR : AISHWARYA K P
*/
#include<stdio.h>
void main()
{
	int n=1,i,sum,count=0;
	while(count<4)
	{
		i=1;
		sum=0;
		while(i<n)
		{
			if(n%i==0)
			{
				sum=sum+i;
			}
			i++;
		}
		if(sum==n)
		{
			printf("%d\n",n);
			count++;
		}
		n++;
	}
}
