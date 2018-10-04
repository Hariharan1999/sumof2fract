#include<stdio.h>
float func(float n1,float d1,float n2,float d2)
{
 float frac=(n1/d1)+(n2/d2);
return frac;
}
void main()
{
  float num1,denom1,num2,denom2;
  float a;
  printf("enter the numerator of first fraction\n");
  scanf("%f",&num1);
  printf("enter the denominator of the first fraction\n");
  scanf("%f",&denom1);
   printf("enter the numerator of second fraction\n");
  scanf("%f",&num2);
  printf("enter the denominator of the second fraction\n");
  scanf("%f",&denom2);
  a=func(num1,denom1,num2,denom2);
  printf("%0.2f / %0.2f + %0.2f / %0.2f=%0.2f",num1,denom1,num2,denom2,a);
}
