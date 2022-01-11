#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;

    for(i=5;i>0;i--)
    {
        for(j=1;j<i+1;j++)
        {
            printf("%d",i);
        }
        printf("\n");
    }
}
/*
output:

55555
4444
333
22
1

*/
