
#include<stdio.h>
#include<conio.h>
int rows=3,cols=3; /// values automatically set to zero
void transpose(int matrix[3][3]);
void input(int matrix[3][3]);
void prinnt(int matrix[3][3]);
int main()
{

    printf("enter the matrix :\nrows:");
    scanf("%d",&rows);
    printf("columns:");
    scanf("%d",&cols);
    int matrix[rows][cols];
    input(matrix);
    printf("entered matrix:\n");
    prinnt(matrix);
    printf("transposed matrix:\n");
    transpose(matrix);
    return 0;
}
void input(int matrix[rows][cols])
{
    int i,j;
    printf("enter the elements of matrix:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
            scanf("%d",&matrix[i][j]);
    }
}
void prinnt(int matrix[rows][cols])
{
    int i,j;
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf(" %d ",matrix[i][j]);
        }
        printf("\n");
    }
}
void transpose(int matrix[][cols])
{
    int i,j,c[cols][rows];
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            c[j][i]=matrix[i][j];
        }
    }
    rows=rows+cols;
    cols=rows-cols;
    rows=rows-cols;
    prinnt(c);
}

