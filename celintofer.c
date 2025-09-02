#include<stdio.h>
int main()
{
  float cel,fer;
  printf("enter the value of celsius: ");
  scanf("%f", &cel);

  fer=(9.0/5.0)*cel+32;
  printf("the value of temperature in fernhit: %f",fer);
  return 0;
}