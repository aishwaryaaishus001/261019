/*
  PROGRAM TO PRINT THE FACTORIAL OF A NUMBER
  AUTHOR : AISHWARYA K P
  CREATED ON : 28/04/2021
*/
#include<stdio.h>
int main()
{
  int n,i,fact=1;
  printf("Enter the number: ");
  scanf("%d",&n);
  printf("%d! = ",n);
  for(i=1;i<=n;i++)
  {
    fact=fact*i;
    printf("%d ",i);
    if(i!=n)
    {
      printf("x ");
    }
  }
  printf(" = %d\n",fact);
}
