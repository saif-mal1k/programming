#include<conio.h>
#include<stdio.h>
int main()
{
    int i,j,k=1;
    for(i=5;i>1;i--)
    {
        for(j=1;j<i;j++)
            printf(" ");
        for(j=1;j<=k;j++)
            printf("%d",i);
        k+=2;
        printf("\n");
    }
    for(i=1;i<6;i++)
    {
        for(j=1;j<i;j++)
            printf(" ");
        for(j=1;j<=k;j++)
            printf("%d",i);
            k-=2;
        printf("\n");
    }
    return 0;
}
/*
output is:

    5
   444
  33333
 2222222
111111111
 2222222
  33333
   444
    5

*/
