/*
  PROGRAM TO CHECK WHETHER THE YEAR IS LEAP OR NOT USING LOGICAL OPERATORS && AND ||
  AUTHOR : AISHWARYA K P
  CREATED ON : 14/05/2021
*/
#include<stdio.h>
int main()
{
  int y;
  printf("Enter the year: ");
  scanf("%d",&y);
  if((y%100==0 && y%400==0) || y%4==0)
  {
    printf("%d is a Leap Year",y);
  }
  else
  {
    printf("%d is not a Leap Year!!!",y);
  }
  printf("\n\n");
}
