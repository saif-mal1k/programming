#include<stdio.h>
#include<conio.h>
int bin_deci(int);
int main()
{
    int deci,oct,bin,ans;
    printf("enter the choice:\n1.binary to decimal\n2.octal to decimal\n   your choice :");
    scanf("%d",&ans);
    switch(ans)
    {
    case 1:
        printf("enter the binary:");
        scanf("%d",&bin);
        printf("decimal of %d is: %d",bin,bin_deci(bin));
        break;
    case 2:
        printf("enter the octal:");
        scanf("%o",&oct);
        printf("decimal of %o is: %d",oct,deci=oct);
    }
    return 0;
}
int bin_deci(int no)
{
    int i=0,ans=0,rem;
    while (no>0)
    {
        rem=no%10;
        ans=ans+rem*pow(2,i);
        no=no/10;
        i++;
    }
    return (ans);
}

