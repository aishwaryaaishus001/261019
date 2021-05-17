/*
  PROGRAM TO FIND THE VALUE OF ONE NUMBER RAISED TO THE POWER OF THE OTHER
    WHEN TWO NUMBERS ARE ENTERED TO THE KEYBOARD
  AUTHOR : AISHWARYA K P
  CREATED ON : 17/05/2021
*/
#include<stdio.h>
#include<math.h>
void main()
{
  int a,b,p;
  printf("Enter the two numbers : ");
  scanf("%d%d",&a,&b);
  p = pow(a,b);
  printf("%d^%d = %d\n\n",a,b,p);
}
