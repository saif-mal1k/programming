#include<stdio.h>
#include<conio.h>

int *func(int a,int b);        ///declaring a pointer function (function returning pointer)
                               ///this function returns a pointer to int

int main()
{
    int a=2,b=4;
/// ans1=*func(a,b);          /// not right way of calling "will be read as 'ans1=*(func(a,b))' not what we want "

/// ans1=func(a,b);           ///just call (only name of function)  ans1 will have address we have to declare it as pointer

    int *ans1=func(a,b);      ///correct
    printf("\n*ans1:%d",*ans1);/// since, pointer is returned hence *ans1 but will give error if ans1 is not declared as pointer

    return 0;
}
int *func(int a,int b)
{
    int z=a+b;
    int *ptr=&z;            ///should have a pointer inside
    return(ptr);            ///address is returned     (point to remember "z get deleted pointer returned to non existing  value")
}

