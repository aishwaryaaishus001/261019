#include<stdio.h>
void main()
{
  float a,b,s,d,p,q;
  printf("Enter two numbers: ");
  scanf("%f%f",&a,&b);
  s=a+b;
  d=a-b;
  p=a*b;
  q=a/b;
  printf("%f + %f = %f\n",a,b,s);
  printf("%f - %f = %f\n",a,b,d);
  printf("%f * %f = %f\n",a,b,p);
  printf("%f / %f = %f\n",a,b,q);
}
