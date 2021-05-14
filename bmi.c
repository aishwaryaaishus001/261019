/*
  PROGRAM TO FIND THE BMI OF A PERSON
  AUTHOR : AISHWARYA K P
  CREATED ON : 14/05/2021
*/
#include<stdio.h>
int main()
{
  float h,w,bmi;
  printf("Enter the height in meters: ");
  scanf("%f",&h);
  printf("Enter the weight in kilogram: ");
  scanf("%f",&w);
  bmi=w/(h*h);
  if(bmi<15)
  {
    printf("Starvation");
  }
  else if(15.1<=bmi && bmi<=17.5)
  {
    printf("Anorexic");
  }
  else if(17.6<=bmi && bmi<=18.5)
  {
    printf("Underweight");
  }
  else if(18.6<=bmi && bmi<=24.9)
  {
    printf("Ideal");
  }
  else if(25<=bmi && bmi<=25.9)
  {
    printf("Overweight");
  }
  else if(30<=bmi && bmi<=30.9)
  {
    printf("Obese");
  }
  else if(40<=bmi)
  {
    printf("Morbidly Obese");
  }
  printf("\n\n");
}
