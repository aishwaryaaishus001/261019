/*
  PROGRAM TO FIND THE SUM OF n NUMBERS.
  AUTHOR : AISHWARYA KP.
*/
#include<stdio.h>
void main()
{
  int n,a[50],i,sum=0;
  printf("How many numbers: ");
  scanf("%d",&n);
  if(n<=50)
  {
    printf("Enter the %d numbers: ",n);
    for(i=0;i<n;i++)
    {
      scanf("%d",&a[i]);
      sum=sum+a[i];
    }
    printf("SUM = %d\n",sum);
  }
  else
  {
    printf("Enter a number less than or equal to 50!!!");
  }
}
