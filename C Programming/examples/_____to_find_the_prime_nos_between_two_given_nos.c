#include<stdio.h>
#include<conio.h>
int isprime(int);
int no_between(int,int);
int main()
{
    int start,end;
    scanf("%d-%d",&start,&end);
    no_between(start,end);
    return 0;
}
int isprime(int no)
{
    int i;
    for(i=2;i<no;i++)
    {
        if(no%i==0)
            return (0);
    }
    return (1);
}
int no_between(int start,int end)
{
    for(start=start;start<end;start++)
        if(isprime(start))
            printf(" %d",start);
}
