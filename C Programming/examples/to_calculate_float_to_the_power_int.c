#include<stdio.h>
#include<conio.h>
double func(double,int);
int main()
{
    double fl;
    int p;
    printf("enter as float^pow:");
    scanf("%lf^%d",&fl,&p);
    printf("ans is:%.4lf",func(fl,p));
    return 0;
}
double func(double fl,int p)
{
    double ans=1;
    while(p>0)
    ans=ans*fl,p--;
    return (ans);
}

