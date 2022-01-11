#include<stdio.h>
#include<conio.h>
int (*func_pointer)(int,int);    ///declaring a function pointer(pointer to function)
int func(int a,int b);           ///declaring a function

int main()
{
    int ans1,ans2,a=2,b=4;
    func_pointer=func;          ///assigning  address of function to function pointer
    ans1=(*func_pointer)(a,b);  ///calling function via function pointer
    printf("ans1:%d",ans1);
    ans2=func_pointer(a,b);     ///indirection operator can be omitted
    printf("\nans2:%d",ans2);
    return 0;
}
int func(int a,int b)
{
    return(a+b);
}
