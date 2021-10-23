#include<stdio.h>
#include<conio.h>
int pf(int);
int main()
{
    int no,i;
    scanf("%d",&no);
    i=pf(no);
    return(0);
}
int pf(int no)
{
    static int i=2;
    if(i<=no)
    {
        if(no%i==0)
        {
            printf("%d ",i);
            return(pf(no/=i));
        }
        else
            {
                i++;
                return(pf(no));
            }
    }
    else
        return(0);
}
