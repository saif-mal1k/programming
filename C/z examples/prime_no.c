#include<stdio.h>
int main()
{
    int i,j,no,t=3;
    printf("enter last digit:");//inputs max no upto which..
    scanf("%d",&no);
    printf("1 2 ");
    for(i=3;i<=no;i++)
    {
            for(j=i-1;j>1;j--)
            {
                if (i%j==0)
                    break;
                else if (j==2)
                    printf("%d ",i);
            }

    }
    return 0;

}

