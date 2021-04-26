#include<stdio.h>
void main()
{
  int a,acopy,b;
  printf("Enter two numbers: ");
  scanf("%d%d",&a,&b);
  acopy=a;
  a=b;
  b=acopy;
  printf("a = %d\nb = %d\n",a,b);
}
