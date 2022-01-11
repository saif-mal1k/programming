#include<stdio.h>
#include<conio.h>
int main()
{
    int i=2,no;
    scanf("%d",&no);
    while(i<=no)
    {
        if(no%i==0)
        {
            printf(" %d ",i);
            no/=i;
            //printf(" no: %d",no);
        }
        else
        {
            i++;
            //printf(" i: %d",i);
        }
    }
    return(0);
}
