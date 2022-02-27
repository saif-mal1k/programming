#include<stdio.h>
#include<conio.h>
void HCF(int,int);
int LCM(int,int);
int main()
{
    int no1,no2,ans;
    printf("enter 1st no:");
    scanf("%d",&no1);
    printf("enter 2nd no:");
    scanf("%d",&no2);
    HCF(no1,no2);
    ans=LCM(no1,no2);
    printf("LCM is:%d",ans);
    printf("\n\n\n\n");
    return 0;
}
void HCF(int a,int b)
{
    int div;
    if(a>b)
        div=b;
    else
        div=a;
    while(div>0)
    {
        if(a%div==0 && b%div==0)
            {
                printf("HCF is:%d\n",div);
                break;
            }
        else
            div--;
    }
    if(div==0)
        printf("HCF not possible");
}
int LCM(int a,int b)
{
    int m=1,i=2,big;
    if(a>b)
        big=a;
    else
        big=b;
    while(i<=big)
    {
        if(a%i==0&&b%i==0)
        {
            //printf("\ti=%d",i);
            m*=i;
           // printf("\tm=%d",m);
            a/=i,b/=i;
           // printf("\ta=%d\tb=%d\n",a,b);
            i++;
        }
        i++;
    }
    m*=a*b;
    return m;
}
