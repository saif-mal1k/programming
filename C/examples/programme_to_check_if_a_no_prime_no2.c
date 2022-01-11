#include<stdio.h>
#include<conio.h>
char isprime(int);
int main()
{
    int no;
    scanf("%d",&no);
    printf("%c",isprime(no));
    return 0;
}
char isprime(int no)
{
    int i;
    char y,n;
    for(i=2;i<no;i++)
    {
        if(no%i==0)
            return ('n');
    }
    return ('y');
}
