#include<stdio.h>
int main()
{
  int i, n=10;
  int num =2;
  printf("first %d even numbers are :\n" ,n);
  for(i =1;i<=n; i++)
  {
    printf("%d",num);
    num = num + 2;
  }
  return 0;
}

