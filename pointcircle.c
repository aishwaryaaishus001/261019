/*
  PROGRAM TO DETERMINE WHETHER A POINT IS INSIDE, OUTSIDE OR ON THE CIRCLE,
    WHEN THE RADIUS AND THE ORIGIN OF THE CIRCLE ARE GIVEN
  AUTHOR : AISHWARYA K P
  CREATED ON : 27/04/2021
*/
#include<stdio.h>
#include<math.h>
int main()
{
  //x1 & y1 are the coordinates of the origin
  //x2 & y2 are the coordinates of the point
  int x1,y1,x2,y2,r,d;
  printf("Enter the coordinates of the origin(x1 & y1): ");
  scanf("%d%d",&x1,&y1);
  printf("Enter the radius(r): ");
  scanf("%d",&r);
  printf("Enter the coordinates of the point(x2 & y2): ");
  scanf("%d%d",&x2,&y2);
  d=sqrt(pow(x2-x1,2)+pow(y2-y1,2));
  if(d<r)
  {
    printf("The point is inside the circle\n");
  }
  else if(d==r)
  {
    printf("The point is on the circle\n");
  }
  else
  {
    printf("The point is outside the circle\n");
  }
}
