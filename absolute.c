/*
  PROGRAM TO FIND THE ABSOLUTE VALUE OF A NUMBER
  AUTHOR : AISHWARYA K P
  CREATED ON : 26/04/2021
*/
#include<stdio.h>
void main()
{
  int n,a;
  printf("Enter the number: ");
  scanf("%d",&n);
  if(n<0)
  {
    a=-n;
    printf("Absolute value of %d is %d\n",n,a);
  }
  else if(n>0)
  {
    a=n;
    printf("Absolute value of %d is %d\n",n,a);
  }
  else
  {
    a=n;
    printf("Absolute value of %d is %d\n",n,a);
  }
}
