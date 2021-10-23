#include<stdio.h>
#include<conio.h>
#include<math.h>
int fact (int);
long permutation(int,int);
long combination(int,int);
int main()
{
    char ch='y';

    while(ch='y'){
    int obj,che,no;
    printf("\n\nenter the no of objects:");
    scanf("%d",&obj);
    printf("enter the no of choices at a time:");
    scanf("%d",&che);
    if(obj>12 || (obj<che))
        printf("\"object's should be less than 13 and choice's should be less than or equal to object's\"");
    else
        printf("no of permutation are:%ld \nwhile no of combinations are:%ld",permutation(obj,che),combination(obj,che));
    }
    return(0);
}
int fact(int no)
{
    if(no==0||no==1)
        return(1);
    else
        return(no*fact(no-1));
}
long permutation(int n,int r)
{
    return(fact(n)/fact(n-r));
}
long combination(int n,int r)
{
    return(fact(n)/(fact(r)*fact(n-r)));
}
