#include<stdio.h>
#include<conio.h>
int max(int arr[][3]);
int min(int arr[][3]);
int sum(int arr[][3]);
void print(int brr[][3]);
void sum_matrix(int arr[][3],int brr[][3]);
void multiply_matrix(int arr[][3],int brr[][3]);
int main()
{
    int i,j,arr[3][3],brr[3][3]={1,2,3,4,5,6,7,8,9};
    printf("enter the elements of matrix 3*3\n");
    for(i=0;i<3;i++)//scan array element "input"
    {
        for(j=0;j<3;j++)
        {scanf("%d",&arr[i][j]);}
        printf("\n");
    }
    printf("\nmatrix 1 is:\n");
    print(arr);
    printf("sum of matrix1:%d\n",sum(arr));
    printf(" max:%d",max(arr));
    printf(" min:%d",min(arr));

    printf("\nmatrix 2 is:\n");
    print(brr);
    printf("sum of matrix2:%d\n",sum(brr));
    printf(" max:%d",max(brr));
    printf(" min:%d",min(brr));

    printf("\nsum of both matrix is:\n");
    sum_matrix(arr,brr);
    printf("\nmultiply of both matrix is:\n");
    multiply_matrix(arr,brr);

    return(0);
}
int max(int arr[][3])
{
    int max=arr[0][0],i,j;
    for(i=0;i<3;i++) //max element
    {
        for(j=0;j<3;j++)
        {
                if(arr[i][j]>max)
                    max=arr[i][j];
        }
    }
    return max;
}

int min(int arr[][3])
{
    int min=arr[0][0],i,j;
    for(i=0;i<3;i++) //min element
    {
        for(j=0;j<3;j++)
        {
                if(arr[i][j]<min)
                    min=arr[i][j];
        }
    }
    return min;
}

int sum(int arr[][3])
{
    int sum=0,i,j;
        for(i=0;i<3;i++)//calculate sum
    {
        for(j=0;j<3;j++)
            sum=sum+arr[i][j];
    }
    return sum;
}

void print(int brr[][3])
{
    int i,j;
    for(i=0;i<3;i++)//for rows
    {                                       //print matrix
        for(j=0;j<3;j++)//for column's
            printf(" %d ",brr[i][j]);
        printf("\n");
    }
}

void sum_matrix(int arr[][3],int brr[][3])
{
    int crr[3][3],i,j;
    for(i=0;i<3;i++)//calculate sum add to matrix
    {
        for(j=0;j<3;j++)
            crr[i][j]=brr[i][j]+arr[i][j];
    }

    print(crr);

}

void multiply_matrix(int arr[][3],int brr[][3])
{
    int crr[3][3],i,j,k;
    for(i=0;i<3;i++)//calculate sum add to matrix
    {
        for(j=0;j<3;j++)
            {
                crr[i][j]=0;
                for(k=0;k<3/*"Column of matrix 1"*/;k++)
                    crr[i][j]+=arr[i][k]*brr[k][j];
            }
    }

    print(crr);

}
