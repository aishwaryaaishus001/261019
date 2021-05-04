/*
  PROGRAM TO CHECK WHETHER A NUMBER IS EVEN OR ODD
  AUTHOR : AISHWARYA K P
*/
#include<stdio.h>
void main()
{
  int n;
  printf("Enter the number to be checked: ");
  scanf("%d",&n);
  if(n%2==0)
  {
    printf("%d IS EVEN\n",n);
  }
  else
  {
    printf("%d IS ODD\n",n);
  }
}
