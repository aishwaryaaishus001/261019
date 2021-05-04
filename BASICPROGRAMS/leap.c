/*
  PROGRAM TO CHECK WHETHER A YEAR IS LEAP YEAR OR NOT
  AUTHOR : AISHWARYA K P
*/
#include<stdio.h>
void main()
{
  int n;
  printf("Enter the year : ");
  scanf("%d",&n);
  printf("\n\n\n");
  if(n%100==0)
  {
    if(n%400==0)
    {
      printf("%d is a leap year!",n);
    }
    else
    {
      printf("%d is not a leap year!!!",n);
    }
  }
  else
  {
    if(n%4==0)
    {
      printf("%d is a leap year!",n);
    }
    else
    {
      printf("%d is not a leap year!!!",n);
    }
  }
  printf("\n\n\n");
}
