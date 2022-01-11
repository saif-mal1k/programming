#include<stdio.h>

int main(void)
{
   int b,a=10;
   a=a++;
   printf("%d\n",a);
   a=a++ * a--;
   printf("%d\n",a);
   printf("%d\n",a++ * a++);
    return 0;
}
