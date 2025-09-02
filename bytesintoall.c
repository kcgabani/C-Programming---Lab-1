#include<stdio.h>
int main()
{
 float bytes,kb,mb,gb;
 printf("enter the bytes: ");
 scanf("%f",&bytes);

 kb= bytes/1024;
 mb=kb/1024;
 gb=mb/1024;
 printf("The answer of bytes in to kb is %f\n",kb);
 printf("The answer of bytes in to mb is %f\n",mb);
 printf("The answer of bytes in to gb is %f\n",gb);

 return 0;

}
