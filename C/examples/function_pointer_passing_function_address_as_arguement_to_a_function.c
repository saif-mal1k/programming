#include<stdio.h>
#include<conio.h>

int add(int a,int b,int (*bg)(int,int),int c);      ///declaration of a (function pointer as argument).
int big(int a,int b);                               /// don't forget the bracket over bg since *bg will make it function...
                                                    ///...returning pointer while (*bg) will make it pointer to function.
int main()
{
    int a=6,b=5,c=1;
    printf("\nans:%d",add(a,b,big,c));      ///function pointer to be initialized with address of "big"(address of function).
    return 0;
}

int add(int a,int b,int (*bg)(int,int),int c)    ///function pointer initialized with address of function"big".
{
    return(bg(a,b)+c);              ///indirect invoking/calling of "big" using function pointer.
}

int big(int a,int b)
{
    if(a>=b)
        return a;
    else
        return b;
}
