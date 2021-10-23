#include<stdio.h>
#include<conio.h>

int add(int a,int b,int (*bg)(int,int),int c);      ///declaration of a (function pointer as argument)
int big(int a,int b);

int main()
{
    int a=6,b=5,c=1;
    int (*bg)(int,int);                    /// don't forget the bracket over bg since *bg will make it function...
                                           ///...returning pointer while (*bg) will make it pointer to function.
    bg=big;                                /// big contains address of function big

    printf("\nans:%d",add(a,b,bg,c));      ///function pointer to be initialized with address of big
    return 0;
}

int add(int a,int b,int (*bg)(int,int),int c)///function pointer initialized
{
    return(bg(a,b)+c);                     ///indirect invoking/calling of big using function pointer
}

int big(int a,int b)
{
    if(a>=b)
        return a;
    else
        return b;
}
