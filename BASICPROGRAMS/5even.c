/*
  PROGRAM TO PRINT THE FIRST 5 EVEN NUMBERS
  AUTHOR : AISHWARYA K P
  CREATED ON : 28/04/2021
*/
#include<stdio.h>
int main()
{
  int n=1,count=0;
  while(count<5)
  {
    if(n%2==0)
    {
      printf("%d   ",n);
      count++;
    }
    n++;
  }
  printf("\n\n");
}
