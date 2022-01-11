#include<conio.h>
int main ()
{
    int i,j,k;
    for(i=1;i<6;i++)
    {
        for(j=i;j>1;j--)
        printf(" ");
        for(j=1;j+i-1<=5;j++)
        printf("*");
        for(j=1;j+i<=5;j++)
        printf("*");
        printf("\n");
    }
}
/*
output is:

*********
 *******
  *****
   ***
    *

*/
