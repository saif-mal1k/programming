#include<math.h>
#include<stdio.h>
int powe(int,int);
int main(void)
{
    int no,ans=0,i=0;
    printf("enter zero to stop");
    do
    {
        printf("enter the no:");
        scanf("%d",&no);
        ans+=no;
    }
    while(no!=0);
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
