#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;

    for(i=1;i<6;i++)
    {
        for(j=1;j<6;j++)
        {
            if(j<=5-i)
            printf(" ");
            else
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
