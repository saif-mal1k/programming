#include<stdio.h>
#include<conio.h>
float pow(float,int);
int main()
{
    printf("%f",pow(2,3));
    return 0;
}
float pow(float ans,int i)
{
    float calc=1;
    while(i>0)
    {
        printf("\ncalc=%f",calc*=ans);
        printf("\ni=%d",i--);
    }
    return(calc);
}

