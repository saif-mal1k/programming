#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j;
    for (i=5;i>0;i--)
    {
        for(j=i;j<6;j++)
        {
            printf("%d",j%2);
        }
        printf("\n");
    }
    return 0;
}
/*
output:

1
01
101
0101
10101
*/
