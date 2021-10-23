#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int main()
{
    int P[5],AT[5],BT[7],WT[7],TAT[7];
    int i;
    printf("please enter AT(arrival time),BT(burst time)\n");
    printf("****please enter arrival time****\n\n");
    printf("process\tAT\tWT\t\n");
    for(i=1;i<6;i++)
    {
        printf("P%d\t",i);
        scanf("%d",&AT[i]);
    }

    system("cls");
    printf("please enter AT(arrival time),BT(burst time)\n");
    printf("****please enter burst time****\n\n");
    printf("process\tAT\tWT\t\n");
    for(i=1;i<6;i++)
    {
        printf("P%d\t",i);
        printf("%d\t",AT[i]);
        scanf("%d",&BT[i]);
    }

    for(i=0;i<max;i++)
    {

    }
    return(0);
}

