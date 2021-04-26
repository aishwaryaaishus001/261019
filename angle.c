/*
  PROGRAM TO CHECK WHETHER A TRIANGLE IS VALID OR NOT WHEN IT'S ANGLES ARE ENTERED
  AUTHOR : AISHWARYA K P
  CREATED ON : 26/04/2021
*/
#include<stdio.h>
void main()
{
  int a,b,c;
  printf("Enter the angles: ");
  scanf("%d%d%d",&a,&b,&c);
  if(a+b+c==180)
  {
    printf("THE TRIANGLE IS VALID\n");
  }
  else
  {
    printf("THE TRIANGLE IS INVALID!!!\n");
  }
}
