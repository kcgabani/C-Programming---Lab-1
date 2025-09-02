#include<stdio.h>
int main()
{
  float P,R,N,I;
  printf("enter the value of principal: ");
    scanf("%f", &P);
  printf("enter the value of rate: ");
  scanf("%f", &R);
  printf("enter the value of time: ");
 scanf("%f", &N);

  I=P*R*N/100;
  printf("the value of INTEREST: %f\n",I);
  return 0;
}