#include<stdio.h>
#include<conio.h>
int main ()
{
    int i,j,k=1;
    for(i=1;i<5;i++)
    {
        for(j=5;j>i;j--)
            printf(" ");
        for(j=i;j<=k;j++)
            printf("%d",j);
        k+=2;
        for(j=i+i-1-1;j>=i;j--)
            printf("%d",j);
        printf("\n");
    }
    k=9;
    for(i=1;i<6;i++)
    {
        for(j=1;j<i;j++)
            printf(" ");
        for(j=6-i;j<=k;j++)
            printf("%d",j);
        k-=2;
        for(j=(6-i)+(6-i-1)-1;j>=6-i;j--)
            printf("%d",j);
        printf("\n");
    }
}
/*
output is:

    1
   232
  34543
 4567654
567898765
 4567654
  34543
   232
    1

*/
