#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k=1;
    for(i=1;i<6;i++)
    {
        for(j=1;j<6-i;j++)
            printf(" ");
        for(j=1;j<=k;j++)
            printf("%d",j);
        k+=2;
        printf("\n");
    }
    k=k-4;
    for(i=1;i<5;i++)
    {
        for(j=1;j<=i;j++)
            printf(" ");
        for(j=1;j<=k;j++)
            printf("%d",j);
        k-=2;
        printf("\n");
    }
    return 0;
}
/*
output is:

    1
   123
  12345
 1234567
123456789
 1234567
  12345
   123
    1

*/
