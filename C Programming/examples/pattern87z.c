#include<stdio.h>
#include<conio.h>
int main()
{
    int i,j,k=9;
    for(i=1;i<6;i++)
    {
        for(j=1;j<i;j++)
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

123456789
 1234567
  12345
   123
    1

*/
