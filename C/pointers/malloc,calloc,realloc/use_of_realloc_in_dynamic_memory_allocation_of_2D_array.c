///need's checking
#include<stdio.h>
#include<conio.h>
int main()
{
    int rows,cols,i,j;
    printf("Enter the rows*cols \"r*c\":");
    scanf("%d*%d",&rows,&cols);
    float (*ptr)[cols];

    ptr=(float *)malloc(rows*cols*sizeof(float)); /// same effect ptr=(float *)malloc(rows*cols,sizeof(float));

    for(i=0;i<rows;i++)
    {
        printf("row %d enter element's:-\n",i+1);
        for(j=0;j<cols;j++)
        {
            printf("%d. ",j+1);
            scanf("%f",&ptr[i][j]);
        }
        if(i==0&&rows==1)
        {
            printf("lets add one more rows\n");
            rows+=1;
            ptr=(float *)realloc(ptr,rows*cols*sizeof(float));
        }
    }
    printf("your entered matrix is:\n");
    for(i=0;i<rows;i++)
    {
        for(j=0;j<cols;j++)
        {
            printf("%.2f,",ptr[i][j]);
        }
        printf("\n");
    }
    return 0;
}
