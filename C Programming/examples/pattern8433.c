#include<conio.h>
#include<stdio.h>
int main()
{
    int i,j,k,l=1;
    for(i=1;i<6;i++)
    {
        for(j=1;j<6-i;j++)
        {
            printf(" ");
        }
        for(k=1;k<=l;k++)
        {
            printf("%d",k);
        }
        l+=2;
        printf("\n");
    }
    return 0;
}


/*
output:

    1
   123
  12345
 1234567
123456789

*/
