#include<stdio.h>
#include<conio.h>

int main()
{
    int arr[18],count[7],i,j;
    printf("enter the no of values:");
    scanf("%d",&j);
    for(i=0;i<j;i++)
    {
         printf("enter the value i:\n");
         scanf("%d",&arr[i]);
    }

    for(i=0;i<j;i++)
    {
        count[i]=0;
    }
    for(i=0;i<j;i++)
    {
        ++count[arr[i]];
    }
    printf("\ntimes it came:");

    for(i=0;i<j;i++)
    {

        printf("%d:\t%d\n",i,count[i]);

    }
}
