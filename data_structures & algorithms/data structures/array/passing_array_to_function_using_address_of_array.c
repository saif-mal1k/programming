#include<stdio.h>
#include<conio.h>
void prntarr(int a[3]);
int main()
{
    int (*ptr),arr[4]={1,2,3,4};
    ptr=arr;
    prntarr(arr);
    return 0;
}
void prntarr(int a[3])
{
    int i,j;
    printf("elements in 1D array:\n");
    for(i=0;i<3;i++)
    {
            printf("%d %d\t",*(a+i),a[i]);
        printf("\n");
    }
}
