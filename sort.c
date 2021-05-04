/*
  PROGRAM TO ARRANGE n NUMBERS IN ASCENDING ORDER
  AUTHOR : AISHWARYA K P
  CREATED ON : 03/05\2021
*/
#include<stdio.h>
void main()
{
  int n,a[50],i,j,t;
  printf("How many numbers: ");
  scanf("%d",&n);
  printf("Enter the numbers: ");
  for(i=0;i<n;i++)
  {
    scanf("%d",&a[i]);
  }
  for(i=0;i<n-1;i++)
  {
    for(j=i+1;j<n;j++)
    {
      if(a[i]>a[j])
      {
        t=a[i];
        a[i]=a[j];
        a[j]=t;
      }
    }
  }
  printf("ASCENDING ORDER : ");
  for(i=0;i<n;i++)
  {
    printf("%d  ",a[i]);
  }
  printf("\n");
}
