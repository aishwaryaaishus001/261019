/*
	PROGRAM TO PRINT THE PERFECT NUMBERS UPTO 10000
	AUTHOR : AISHWARYA K P
*/
#include<stdio.h>
void main()
{
	int n=1,i,sum;
	while(n<=10000)
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
		}
		n++;
	}
}
