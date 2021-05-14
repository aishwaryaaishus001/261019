/*
  PROGRAM TO CHECK WHETHER THE CHARACTER IS A CAPITAL LETTER, A SMALL LETTER,
    A DIGIT OR A SPECIAL SYMBOL
  AUTHOR : AISHWARYA K P
  CREATED ON : 14/05/2021
*/
#include<stdio.h>
void main()
{
  char c,d;
  printf("Enter the character: ");
  scanf("%c",&c);
  if(65<=c && c<=90)
  {
    printf("Capital Letter");
  }
  else if(97<=c && c<=122)
  {
    printf("Small Letter");
  }
  else if(48<=c && c<=57)
  {
    printf("Digit");
  }
  else if((0<=c && c<=47) || (58<=c && c<=64) || (91<=c && c<=96) || (123<=c && c<=127))
  {
    printf("Special Symbol");
  }
  printf("\n\n");
}
