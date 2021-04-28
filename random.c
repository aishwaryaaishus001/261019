/*
  PROGRAM TO PRINT THE NUMBERS 1 TO 20 IN RANDOM ORDER,
     THE ORDER OF THE RANDOMNESS SHOULD BE DIFFERENT IN EACH TRIAL
  AUTHOR : AISHWARYA K P
  CREATED ON : 27/04/2021
*/
#include<stdio.h>
#include<stdlib.h>
#include<time.h>
void main()
{
  int n,count=0,a[20],i,found=0;
  srand(time(0));
  while(count<20)
  {
      n=rand()%20+1;
      found=0;
      for(i=0;i<count;i++)
      {
          if(a[i]==n)
          {
            found=1;
            break;
          }
      }
      if(found==0)
      {
        printf("%d  ",n);
        count++;
      }
  }
  printf("\n");
}
