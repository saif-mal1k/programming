#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k=1;
    for(i=1;i<6;i++)
    {
        for(j=1;j<6-i;j++)
        printf(" ");
        for(j=1;j<=k;j++)
            printf("*");
        k+=2;
        printf("\n");
    }
    k=7;
    for(i=1;i<5;i++)
    {
        for(j=1;j<=i;j++)
            printf(" ");
        for(j=1;j<=k;j++)
            printf("*");
        k-=2;
        printf("\n");
    }
    return 0;
}
/*
output is:

    *
   ***
  *****
 *******
*********
 *******
  *****
   ***
    *

*/
