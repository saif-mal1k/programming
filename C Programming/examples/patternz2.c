#include<conio.h>
#include<stdio.h>
int main()
{
    int j,i;
    for(i=1;i<=5;i++)
    {
        for(j=1;j<i;j++)
        printf(" ");
        for(j=5;j>=i;j--)
        printf("%d",j);
        for(j=j+2;j<=5;j++)
        printf("%d",j);
        printf("\n");
    }
    return 0;
}
/*
output is:

543212345
 5432345
  54345
   545
    5

*/
