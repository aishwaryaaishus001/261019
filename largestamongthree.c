/*
  PROGRAM TO DETERMINE THE LARGEST AMONG THREE NUMBERS USING CONDITIONAL OPERATORS
  AUTHOR : AISHWARYA K P
  CREATED ON : 15/05/2021
*/
#include<stdio.h>
int main()
{
  int a,b,c,x,y;
  printf("Enter the three numbers : ");
  scanf("%d%d%d",&a,&b,&c);
  x = (a>b) ? a : b;
  y = (x>c) ? x : c;
  printf("%d is the Largest\n\n",y);
}
