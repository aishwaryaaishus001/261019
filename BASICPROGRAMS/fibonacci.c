/*
  PROGRAM TO PRINT n FIBONACCI NUMBERS
  AUTHOR : AISHWARYA K P
  CREATED ON : 06/05/2021
*/
#include<stdio.h>
int main()
{
  int n,i=0,a=0,b=1,fib=a;
  printf("Enter the limit: ");
  scanf("%d",&n);
  while(i<n)
  {
    printf("%d  ",fib);
    a=b;
    b=fib;
    fib=a+b;
    i++;
  }
  printf("\n\n");
}
