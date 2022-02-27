#include<stdio.h>
int main()
{
    int no,ans=0,rem;
    printf("enter the no you wanna insert:");
    scanf("%d",&no);
    while(no/10>0)
    {
        ans=0;
        while(no>0)
        {
            rem=no%10;
            ans=ans+rem;
            no=no/10;
        }
        printf(" answer:%d :-",ans);
        no=ans;
    }
    printf(" HENCE:%d",ans);
    return 0;

}

