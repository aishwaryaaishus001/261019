/*
  PROGRAM TO DECODE A WORD
  AUTHOR : AISHWARYA K P
  CREATED ON : 14/05/2021
*/
#include<stdio.h>
int main()
{
  char a[20],b[20];
  int i,length=0;
  printf("Enter the code word: ");
  scanf("%s",a);
  for(i=0;a[i]!='\0';i++)
  {
    length++;
  }
  for(i=0;i<length;i++)
  {
    b[i]=a[i]-2;
    printf("%c",b[i]);
  }
  printf("\n");
}
