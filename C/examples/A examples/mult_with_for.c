#include<stdio.h>
int main()
{
    int no1,no2,ans=0;
    printf("enter the 1 no:");
    scanf("%d",&no1);
    printf("enter the 2 no:");
    scanf("%d",&no2);
    for(no2;no2>0;no2--)
        ans=ans+no1;
    printf("answer:%d",ans);

    return 0;

}
