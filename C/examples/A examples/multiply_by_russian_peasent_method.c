#include<stdio.h>
#include<conio.h>
int main()
{
    int no1,no2,sum=0;
    printf("input multiplicand:");
    scanf("%d",&no1);
    printf("input multiplier:");
    scanf("%d",&no2);
    while (no1>=1)
    {
        if(no1%2!=0)
            sum+=no2;
        no1/=2;
        no2*=2;
    }
    printf("\n SUM is: %d",sum);
    return (0);
}
