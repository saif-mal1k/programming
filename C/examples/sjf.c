#include<stdio.h>
#include<conio.h>
int main()
{
    int P[7],AT[7],BT[7],WT[7],TAT[7];
    int i;
    printf("please enter AT(arrival time),BT(burst time)\n");
    for(i=1;i<6;i++)
    {
        printf("P%d\t",i);
        scanf("%d",&AT[i]);
    }
    system(cls);
    printf("pro..\tAT\tWT\t\n");
    for(i=1;i<6;i++)
    {
        printf("P%d\t",i);
        printf("%d\t",AT[i]);
        scanf("%d",&BT);
    }

    return(0);
}
