#include<stdio.h>
int main(void)
{
    int i;
    float sub,total=0;
    for(i=1;i<6;i++)
    {
        printf("\nenter marks in sub%d:",i);
        scanf("%f",&sub);
        total=total+sub;
        printf("  sub%d:%g  total:%g",i,sub,total);
    }
    printf("\ntotal marks:%g\n",total);
    total=(total/500)*100;
    printf("\npercentage:%g",total);
    return 0;
}
