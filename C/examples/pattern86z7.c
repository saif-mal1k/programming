#include<stdio.h>
#include<conio.h>
int main ()
{
    int i,j,k;
    for(i=5;i>0;i--)
    {
        for(j=1;j<i;j++)
            printf(" ");
        for(j=5;j>=i;j--)
            printf("%d",j);
            k=j+1;
        for(j=k;j<5;j++)
            printf("%d",j+1);
        printf("\n");
    }
    for(i=2;i<6;i++)
    {
        for(j=1;j<i;j++)
            printf(" ");
        for(j=5;j>=i;j--)
            printf("%d",j);
            k=j+1;
        for(j=k;j<5;j++)
            printf("%d",j+1);
        printf("\n");
    }
}
/*
output is:

    5
   545
  54345
 5432345
543212345
 5432345
  54345
   545
    5

*/
