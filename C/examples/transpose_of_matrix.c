#include<stdio.h>
#include<conio.h>
int main()
{
int rows=3,cols=3,matrix[3][3]={1,2,3,4,5,6,7,8,9},c[3][3];
 int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            c[j][i]=matrix[i][j];
        }

    }
    printf("matrix is:\n");
     for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf(" %d ",matrix[i][j]);
        }
        printf("\n");
    }

    printf("transpose of matrix is:\n");
     for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf(" %d ",c[i][j]);
        }
        printf("\n");
    }

    return 0;
}
