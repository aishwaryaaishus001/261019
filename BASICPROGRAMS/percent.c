#include<stdio.h>
void main()
{
  float phy,che,mat,per,sum;
  printf("Enter the marks obtained for Physics : ");
  scanf("%f",&phy);
  printf("Enter the marks obtained for Chemistry : ");
  scanf("%f",&che);
  printf("Enter the marks obtained for Maths : ");
  scanf("%f",&mat);
  sum=phy+che+mat;
  per=sum*100/300;
  printf("Percentage : %f\n",per);
  printf("\n\n\n");
  printf("                                                                    **********");
  if(80<=per)
  {
    printf("DISTINCION");
  }
  else if(60<=per<80)
  {
    printf("FIRST CLASS");
  }
  else if(50<=per<60)
  {
    printf("SECOND CLASS");
  }
  else if(40<=per<50)
  {
    printf("THIRD CLASS");
  }
  else
  {
    printf("FAILED");
  }
  printf("**********");
  printf("\n\n\n");
}
