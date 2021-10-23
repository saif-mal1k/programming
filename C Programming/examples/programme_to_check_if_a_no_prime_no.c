#include<stdio.h>
#include<math.h>
int main()
{
    int i,no,k;
    printf("enter the no:");
    scanf("%d",&no);
    k=sqrt(no);
    for(i=2;i<=k+1;i++)
    {
        if(no%i==0)
        {
            printf("not prime");
            break;
        }
        else if(i==k+1)
            printf("prime no");
    }
    return 0;
}
