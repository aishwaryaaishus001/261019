/*
  PROGRAM TO DETERMINE WHETHER A SELLER HAS MADE PROFIT OR INCURRED LOSS
  AUTHOR : AISHWARYA K P
  CREATED ON : 26/04/2001
*/
#include<stdio.h>
void main()
{
  float cp,sp,profit,loss,profitper,lossper;
  printf("Enter the cost price of item: ");
  scanf("%f",&cp);
  printf("Enter the selling price of the item: ");
  scanf("%f",&sp);
  profit=sp-cp;
  loss=cp-sp;
  if(profit>0)
  {
    profitper=(profit/cp)*100;
    printf("HE MADE A PROFIT OF %f  percentage\n",profitper);
  }
  if(loss>0)
  {
    lossper=(loss/cp)*100;
    printf("HE INCURRED A LOSS OF %f percentage\n",lossper);
  }
}
