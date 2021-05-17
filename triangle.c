/*
  PROGRAM TO FIND THE AREA OF A TRIANGLE WHEN ITS THREE SIDES ARE GIVEN
  AUTHOR : AISHWARYA K P
  CREATED ON : 17/05/2021
*/
#include<stdio.h>
#include<math.h>
void main()
{
  float a,b,c,s,area;
  printf("Enter the 3 sides of the triangle: ");
  scanf("%f%f%f",&a,&b,&c);
  s=(a+b+c)/2;
  area=sqrt(s*(s-a)*(s-b)*(s-c));
  printf("Area of the triangle = %f",area);
  printf("\n");
}
