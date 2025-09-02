#include<stdio.h>
int main()
{
  float fer,cel;
  printf("enter the value of farenhit: ");
  scanf("%f", &fer);

  cel=5.0/9.0*(fer-32);
  printf("the value of temperature in celsius: %f",cel);
  return 0;
}