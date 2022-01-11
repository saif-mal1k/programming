#include<stdio.h>
#include<conio.h>

int main()
{
    int i,j,k;
    for (i=2;i<7;i++)
    {
        k=i;
        for(j=2;j<=i;j++)
        {
            printf("%d",k);
            k++;
        }
        printf("\n");
    }
    return 0;
}
/*
output:

2
34
456
5678
678910
*/
