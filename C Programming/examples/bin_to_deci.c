#include<math.h>
#include<stdio.h>
int powe(int,int);
int main(void)
{
    int i=0,no,ans=0,rem;
    printf("enter any binary no:");
    scanf("%d",&no);
    while(no>0)
    {
        rem=no%10;
        ans=ans+rem*powe(2,i);
        no=no/10;
        i++;
    }
    printf("\nanswer is:%d",ans);
    return 0;
}
int powe (int a,int b)
{
    int ans=1;
    while(b>0)
    {
        ans=ans*a;
        b--;
    }
    return ans;
}
