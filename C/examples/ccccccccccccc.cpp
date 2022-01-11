#include studio.h
void main()
{
    int ET,WT[5],AWT,sum=0,av;
    int task={0,20,10,15,12},AT[5];
    /*printf("enter the...\n"):*/
    for(i=1;i<5;i++)
    {
        printf("arrival time of:task.",i);
        scanf("%d",&AT[i])
    }    
    for(i=1;i<5;i++)
    {
        WT[i]=task[i-1]-AT[i];
    }
    for (i = 1; i < 5; i++)
    {
        sum=sum+w[i];
    }
    av=sum/4;
    printf("average is:",av)
    getch();
}