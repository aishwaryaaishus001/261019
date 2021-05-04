/*
	PROGRAM TO DISPLAY n NUMBERS IN REVERSE ORDER
	AUTHOR : AISHWARYA K P
*/
#include<stdio.h>
int main()
{
  int n,a[50],i;
  printf("Enter how many numbers: ");
  scanf("%d",&n);
  if(n<=50)
  {
      printf("Enter the numbers to be reversed: ");
      for(i=0;i<n;i++)
      {
        scanf("%d",&a[i]);
      }
      for(i=n-1;i>=0;i--)
      {
        printf("%d\t",a[i]);
      }
  }
  else
  {
    printf("Enter a number less than or equal to 50!!!");
  }
  printf("\n");
}
