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
        for(k=1;k+j<=6;k++)
        {
            printf("%d ",k);
        }
        printf("\n");
    }
}
/*
output:

    1
   1 2
  1 2 3
 1 2 3 4
1 2 3 4 5

*/
