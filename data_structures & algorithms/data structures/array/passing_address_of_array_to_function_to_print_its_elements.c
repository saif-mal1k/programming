#include<stdio.h>
#include<conio.h>
void prntarr(int *ptr);
int main()
{
    int (*ptr),arr[4]={1,2,3,4};
    ptr=arr;
    prntarr(ptr);
    return 0;
}
void prntarr(int *ptr)
{
    int i,j;
    printf("elements in 1D array:\n");
    for(i=0;i<3;i++)
    {
            printf("%d %d\t",*(ptr+i),ptr[i]);
        printf("\n");
    }
}
