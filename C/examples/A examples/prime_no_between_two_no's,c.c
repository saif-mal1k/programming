#include<stdio.h>
#include<conio.h>
prime_between(int,int);
int main()
{
    int a,b;
    printf("enter the no's like this \"no1,no2\":");
    scanf("%d,%d",&a,&b);
    prime_between(a,b);
    return(0);
}
prime_between(int a,int b)
{
    int i,flag;
    while(a<b)
    {
        flag=0;
        for(i=2;i<=a/2;i++)
        {
                if(a%i==0)
                   {
                       flag=1;
                       break;
                   }
        }
        if (flag==0)
            printf(" %d\n",a);
        a++;
    }
}
