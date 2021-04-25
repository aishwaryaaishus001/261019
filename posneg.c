//PROGRAM TO CHECK WHETHER A NUMBER IS POSITIVE, NEGATIVE, OR NOT
#include<stdio.h>
void main()
{
  int n;
  printf("Enter the number to be checked: ");
  scanf("%d",&n);
  if(n>0)
  {
    printf("%d IS POSITIVE\n",n);
  }
  else if(n<0)
  {
    printf("%d IS NEGATIVE\n",n);
  }
  else
  {
    printf("%d IS NEITHER POSITIVE NOR NEGATIVE\n",n);
  }
}
