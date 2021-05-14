/*
  PROGRAM TO CHECK WHETHER THE TRIANGLE IS EQUILATERAL, ISOSCELES OR RIGHT ANGLED TRIANGLE
    WHEN ITS THREE SIDES ARE GIVEN
  AUTHOR : AISHWARYA K P
  CREATED ON : 14/05/2021
*/
#include<stdio.h>
int main()
{
  int a,b,c;
  printf("Enter the three sides: ");
  scanf("%d%d%d",&a,&b,&c);
  if(a==b && b==c)
  {
    printf("Equilatoral Triangle");
  }
  else if(a==b || b==c || a==c)
  {
    printf("Isosceles Triangle");
  }
  else if((a*a)==(b*b)+(c*c) || (b*b)==(a*a)+(c*c) || (c*c)==(a*a)+(b*b))
  {
    printf("Right Angled Triangle");
  }
  printf("\n\n");
}
