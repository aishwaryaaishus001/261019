/*
  PROGRAM TO FIND WHETHER THE AREA OF A RECTANGLE IS GREATER THAN ITS PERIMETER WHEN IT'S LENGTH AND BREADTH IS GIVEN
  AUTHOR : AISHWARYA K P
  CREATED ON : 26/04/2021
*/
#include<stdio.h>
void main()
{
  int l,b,area,perimeter;
  printf("Enter the length and breadth of the rectangle: ");
  scanf("%d%d",&l,&b);
  area=l*b;
  perimeter=2*(l*b);
  if(area>perimeter)
  {
    printf("Area of the rectangle is greater than its perimeter\n");
  }
  if(area<perimeter)
  {
    printf("Area of the rectangle is less than its perimeter\n");
  }
  else
  {
    printf("Area of the rectangle is equal to its perimeter\n");
  }
}
