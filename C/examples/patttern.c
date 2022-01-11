#include<conio.h>
#include<stdio.h>
int main ()
{
    int i,j,k=9;
    for(i=5;i>0;i--)
    {
        for(j=5;j>i;j--)
            printf(" ");
        for(j=k;j>0;j--)
            printf("%d",i);
        k-=2;
        printf("\n");
    }
    return 0;
}
/*
output is:

*********
 *******
  *****
   ***
    *

*/
