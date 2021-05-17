/*
  PROGRAM TO DETERMINE WHETHER THE YEAR IS LEAP  YEAR OR NOT USING CONDITIONAL OPERATORS
  AUTHOR : AISHWARYA K P
  CREATED ON : 15/05/2021
*/
#include<stdio.h>
int main()
{
  int y,x;
  printf("Enter the year: ");
  scanf("%d",&y);
  x = (y%100==0) ? (y%400) : (y%4);
  if(x==0)
  {
    printf("%d is a Leap Year",y);
  }
  else
  {
    printf("%d is not a Leap Year",y);
  }
  printf("\n\n");
}
