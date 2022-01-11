#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;

    for(i=1;i<6;i++)
    {
        for(j=5;j>i-1;j--)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
/*
output:

54321
5432
543
54
5

*/
