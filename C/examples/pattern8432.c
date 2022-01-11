#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,l=1;

   for(i=1;i<=5;i++)
   {
       for(j=1;j<=5-i;j++)
       {
           printf(" ");
       }
       for(k=1;k<=l;k++)
       {
           printf("%d",i);
       }
       l+=2;
       printf("\n");
   }
}
/*
output:

    1
   222
  33333
 4444444
555555555

*/
