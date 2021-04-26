#include<stdio.h>
void main()
{
  int n,ncopy,count=0,i,lastdigit,rev=0;
  printf("Enter a five digit positive number: ");
  scanf("%d",&n);
  ncopy=n;
  while(n!=0)
  {
    i=n%10;
    count++;
    n=n/10;
  }
  if(count==5)
  {
    while(ncopy!=0)
    {
      lastdigit=ncopy%10;
      rev=lastdigit+rev*10;
      ncopy=ncopy/10;
    }
    printf("REVERSE = %d",rev);
  }
  else
  {
    printf("Enter a five digit positive number!!!");
  }
  printf("\n");
}
