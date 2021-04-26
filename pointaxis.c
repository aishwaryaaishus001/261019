/*
  PROGRAM TO FIND THE POSITION OF A POINT IN THE CO-ORDINATE SYSTEM
  AUTHOR : AISHWARYA K P
  CREATED ON : 26/04/2021
*/
#include<stdio.h>
void main()
{
  int x,y;
  printf("Enter the co-ordinates: ");
  scanf("%d%d",&x,&y);
  if(x==0 && y==0)
  {
    printf("The point lies on the Origin\n");
  }
  else if(x==0)
  {
    printf("The point lies on the Y-axis\n");
  }
  else if(y==0)
  {
    printf("The point lies on the X-axis\n");
  }
  else
  {
    printf("The point doesn't lie on the X-axis, Y-axis, and the Origin!!!\n");
  }
}
