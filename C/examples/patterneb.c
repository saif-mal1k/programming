#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;

    for(i=1;i<6;i++)
    {
        for(j=1;j<=5-i;j++)
        {
            printf(" ");
        }
        for(k=6-i;k<6;k++)
        {
            printf("* ");
        }
        printf("\n");
    }
}
/*
output:

    *
   * *
  * * *
 * * * *
* * * * *

*/
