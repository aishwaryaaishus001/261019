/*
	PROGRAM TO FIND THE SUM, DIFFERENCE, PRODUCT, AND QUOTIENT OF TWO NUMBERS
	AUTHOR : AISHWARYA K P
*/
#include<stdio.h>
void main()
{
	int a,b,s,d,p,q;
	printf("\n\n\n");
	printf("Enter the two numbers: ");
	scanf("%d%d",&a,&b);
	s=a+b;
	d=a-b;
	p=a*b;
	q=a/b;
	printf("\n\n\n%d + %d = %d\n",a,b,s);
	printf("%d - %d = %d\n",a,b,d);
	printf("%d * %d = %d\n",a,b,p);
	printf("%d / %d = %d\n",a,b,q);
	printf("\n\n\n");
}
