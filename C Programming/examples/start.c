#include<stdio.h>
int main()
{
    int i,no1=0,no2=1,ans=1,lim;
    printf("enter the length:");
    scanf("%d",&lim);
    for(i=1;i<lim;i++)
    {
        if(i==1)
            printf("0 ");
        else if(i==2)
            printf("1 ");
        else
        {
            ans=no1+no2;
            printf("%d ",ans);
            no1=no2;
            no2=ans;
        }
    }
    return 0;

}
