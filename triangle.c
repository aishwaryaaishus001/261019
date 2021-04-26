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
