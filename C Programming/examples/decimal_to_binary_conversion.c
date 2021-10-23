#include<stdio.h>
#include<conio.h>
float deci_bin(float);
int main()
{
    float deci,bin;
    scanf("%.4f",&deci);
    printf("binary is:%.4f",deci_bin(deci));
    return 0;
}
float deci_bin(float deci)
{
    int bin=0,in_deci,rem,i;
    float flot,flat=0;
    in_deci=deci;
    while (in_deci>0)
    {
        printf("%d",rem=in_deci%2);
        printf("%d",bin=bin*10+rem);
        printf("%d",in_deci=in_deci/2);
    }
   /* flot=deci-bin;
    for(i=1;i<5;i++)
    {
        flot=flot*2;
        rem=flot;
        flat=flat*10+rem;
    }
    flat/10000;
    */return (bin);
}
