#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k,l=1;

    for(i=1;i<6;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=l;k++)
        {
            printf("*");
        }
        l+=2;
        printf("\n");
    }
}
/*
output:

    *
   ***
  *****
 *******
*********

*/
