/*
  PROGRAM TO FIND THE FACTORIAL OF A NUMBER
  AUTHOR : AISHWARYA K P
  CREATED ON : 17/05/2021
*/
#include<stdio.h>
int main()
{
  int n,i,fact=1;
  printf("Enter the number : ");
  scanf("%d",&n);
  printf("%d! = %d",n,fact);
  for(i=1;i<=n;i++)
  {
    fact = fact * i;
    if(i==1)
    {
      continue;
    }
    printf(" X %d",i);
  }
  printf(" = %d\n\n",fact);
}
