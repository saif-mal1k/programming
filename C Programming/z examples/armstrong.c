#include<stdio.h>
int powe(int,int);
int main()
{
    //a no is armstrong if sum of cube of each digit is equal to that no
    int ans=0,rem,no,org;
    printf("enter the number to check if it is a armstrong or not:");
    scanf("%d",&no);
    org=no;
    while(no>0)
    {
            rem=no%10;
            ans=powe(rem,3)+ans;
            no=no/10;
    }
    if (ans==org)
        printf("no is ARMSTRONG");
    else
        printf("not an armstrong no");
    return 0;

}
int powe(int a,int b)
{
    int ans=1;
    while(b>0)
    {
        ans=ans*a;
        b--;
    }
    return ans;
}
