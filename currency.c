#include<stdio.h>
void main()
{
  int n,c,count=0;
  printf("Enter the amount: ");
  scanf("%d",&n);
  c=n/100;
  n=n%100;
  if(c!=0)
  {
    printf("100 x %d\n",c);
    count=count+c;
  }
  c=n/50;
  n=n%50;
  if(c!=0)
  {
    printf("50 x %d\n",c);
    count=count+c;
  }
  c=n/10;
  n=n%10;
  if(c!=0)
  {
    printf("10 x %d\n",c);
    count=count+c;
  }
  c=n/5;
  n=n%5;
  if(c!=0)
  {
    printf("5 x %d\n",c);
    count=count+c;
  }
  c=n/2;
  n=n%2;
  if(c!=0)
  {
    printf("2 x %d\n",c);
    count=count+c;
  }
  c=n/1;
  n=n%1;
  if(c!=0)
  {
    printf("1 x %d\n",c);
    count=count+c;
  }
  printf("Total number of currencies : %d\n",count);
}
