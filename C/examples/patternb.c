#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k;

    for(i=6;i>0;i--)
    {
        for(j=1;j<i;j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
}
/*
output:

12345
1234
123
12
1

*/
