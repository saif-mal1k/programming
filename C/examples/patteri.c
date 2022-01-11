#include<conio.h>
int main()
{
    int i,j,k;
    for(i=1;i<6;i++)
    {
        for(j=1;j<6-i;j++)
        printf(" ");
        int l=5;
        for(j=1;5-i+j<6;j++)
        printf("%d",l--);
        l=l+2;
        for(j=l;j<6;j++)
        printf("%d",j);
        printf("\n");
    }
    return 0;
}
/*
output is:

    5
   545
  54345
 5432345
543212345

*/
