#include<stdio.h>
#include<conio.h>
void pt2D(int (*ptr)[3]);
int main()
{
    int arr[3][3]={{11,12,13},{21,22,23},{31,32,33}};
    pt2D(arr);
    return 0;
}
void pt2D(int (*ptr)[3])
{
    int i,j;
    printf("elements in 2D array:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            printf("%d\t",ptr[i][j]);
}
/*
this is also right:-
#include<stdio.h>
#include<conio.h>
void pt2D(int a[3][3]);
int main()
{
    int arr[3][3

    11,12,13},{21,22,23},{31,32,33}};
    pt2D(arr);
    return 0;
}
void pt2D(int a[][3])
{
    int i,j;
    printf("elements in 2D array:\n");
    for(i=0;i<3;i++)
        for(j=0;j<3;j++)
            printf("%d\t",a[i][j]);
}
*/
