/*
  PROGRAM TO FIND THE CUBE ROOT OF A NUMBER
  AUTHOR : AISHWARYA K P
  CREATED ON : 26/04/2001
*/
#include<stdio.h>
#include<math.h>
void main()
{
  int n,c;
  printf("Enter the number: ");
  scanf("%d",&n);
  c = cbrt(n);
  if(c*c*c==n)
  {
    printf("CUBE ROOT : %d\n",c);
  }
  else
  {
    printf("THE ENTERED NUMBER IS NOT A PERFECT CUBE!!!\n ");
  }
}
