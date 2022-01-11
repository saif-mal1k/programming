#include<stdio.h>
#include<conio.h>
int main ()
{
    int i,j,k=9,m;
    for(i=5;i>0;i--)
    {
        m=k;
        for(j=5;j>i;j--)
            printf(" ");
        for (j=i;j<=k;j++)
            printf("%d",j);
        k-=2;
        for(j=1;j<i;j++)
            printf("%d",--m);
        printf("\n");
    }
    return 0;
}
/*
output is:

567898765
 4567654
  34543
   232
    1


*/
