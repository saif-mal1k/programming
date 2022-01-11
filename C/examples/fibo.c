#include<stdio.h>
int main()
{
    int i,no1=1,no2=1,ans,lim;
    printf("enter the length:");
    scanf("%d",&lim);
    for(i=1;i<=lim;i++)
    {
        if(i==1)
            printf("1 ");
        else if(i==2)
            printf("1 ");
        else
        {
            ans=no1+no2;
            no1=no2;
            no2=ans;
            printf("%d ",ans);
        }
    }
    return 0;

}
