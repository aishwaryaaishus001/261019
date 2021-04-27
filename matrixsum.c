/*
  PROGRAM TO FIND THE SUM OF TWO MATRICES
  AUTHOR : AISHWARYA K P
  CREATED ON : 27/04/2021
*/
#include<stdio.h>
void main()
{
  int a[10][10],b[10][10],s[10][10],m,n,i,j;
  printf("Enter the order of the 2 matrices: ");
  scanf("%d%d",&m,&n);
  if(m<=10 && n<=10)
  {
    printf("Enter the first matrix: ");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        scanf("%d",&a[i][j]);
      }
    }
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        printf("%d   ",a[i][j]);
      }
      printf("\n\n");
    }
    printf("Enter the second matrix: ");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        scanf("%2d",&b[i][j]);
      }
    }
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        printf("%2d   ",b[i][j]);
      }
      printf("\n\n");
    }
    printf("\n\n\nSum of the matrices = ");
    for(i=0;i<m;i++)
    {
      for(j=0;j<n;j++)
      {
        s[i][j]=a[i][j]+b[i][j];
        printf("%2d   ",s[i][j]);
      }
      printf("\n\n                      ");
    }
    printf("\n\n\n");
  }
  else
  {
    printf("Enter an order less than or equal to 10x10!!!");
  }
}
