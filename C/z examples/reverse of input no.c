#include<stdio.h>
#include<conio.h>
int reverse (int);
ispalindrome(int);
int main()
{
    int no;
    printf("enter the no:");
    scanf("%d",&no);
    printf("reverse is:%d\n",reverse(no));
    ispalindrome(no);
    return (0);
}
int reverse(int no)
{
    int new=0;
    while(no>0)
    {
        new=new*10+no%10;
        no=no/10;
    }
    return(new);
}
ispalindrome(int no)
{
    if(no==reverse(no))
        printf("hence: no is palindrome");
    else
        printf("hence: no isn't palindrome");
}
