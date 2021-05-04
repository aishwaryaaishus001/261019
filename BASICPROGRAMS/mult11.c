/*PROGRAM TO PRINT
a)NUMBERS DIVISIBLE BY 11 BETWEEN 100 & 500
b)THEIR COUNT
c)THEIR SUM
*/
#include<stdio.h>
void main()
{
	int n=100,count=0,sum=0;
	while(n<=500)
	{
		if(n%11==0)
		{
			printf("%d\n",n);
			count=count+1;
			sum=sum+n;
		}
		n=n+1;
	}
	printf("count = %d\n",count);
	printf("sum = %d\n",sum);
	printf("\n\n");
}
