#include<stdio.h>
#include<conio.h>

int *func1(int *a,int b);      ///passing address of a to function

int main()
{
    int a=2,b=4;
    int (*ans2)=func1(&a,b);         ///since func returns address therefore variable should be pointer

    printf("\nans2:%d",*ans2);     ///ans2 contains address of a, *ans2 means value at ans2(address in it)

    printf("\na:%d",a);     ///since a is changed (address of a is used)
    return 0;
}

int *func1(int *a,int b)    ///address of a is passed
{
    (*a)=(*a)+b;            ///changed value of a
    return(a);              ///pointer to a returned
}
