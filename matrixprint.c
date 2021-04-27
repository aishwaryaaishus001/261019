/*
  PROGRAM TO PRINT A MATRIX
  AUTHOR : AISHWARYA K P
  CREATED ON : 27/04/2021
*/
#include<stdio.h>
void main()
{
  int a[10][10],m,n,i,j;
  printf("Enter the order of the matrix: ");
  scanf("%d%d",&m,&n);
  if(m<=10 && n<=10)
  {
    printf("Enter the matrix: ");
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
        printf("%d\t",a[i][j]);
      }
      printf("\n");
    }
  }
  else
  {
    printf("Enter an order less than or equal to 10x10!!!");
  }
}
