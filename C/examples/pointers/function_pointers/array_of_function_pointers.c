#include<stdio.h>
#include<conio.h>
int add(int a,int b);
int sub(int a,int b);
int mul(int a,int b);
int div(int a,int b);


int main()
{
    int a=8,b=2,i;
    int (*ptr[4])(int,int)={add,sub,mul,div}; ///array of function pointers

    for(i=0;i<4;i++)
    {
        printf("%d",ptr[i](a,b));
    }
    return 0;
}
int add(int a,int b)
{
    printf("\nadd:");
    return(a+b);
}
int sub(int a,int b)
{
    printf("\nsub:");
    return(a-b);
}int mul(int a,int b)
{
    printf("\nmul:");
    return(a*b);
}int div(int a,int b)
{
    printf("\ndiv:");
    return(a/b);
}

/*output:
add:10
sub:6
mul:16
div:4
*/
