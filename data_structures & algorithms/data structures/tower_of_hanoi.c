#include<stdio.h>
#include<conio.h>
tower(int,char,char,char);
int main()
{
    int n;
    printf("enter the no of disc's:");
    scanf("%d",&n);
    tower(n,'A','B','C');
    return(0);
}
tower (int n,char beg,char aux,char end)
{
    if(n==1)
        printf("\n\'%c\'->\'%c\'",beg,end);
    else
        {
            tower(n-1,beg,end,aux);
            printf("\n\'%c\'->\'%c\'",beg,end);
            tower(n-1,aux,beg,end);
        }
}
