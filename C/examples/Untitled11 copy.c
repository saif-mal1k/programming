#include <conio.h>
#include <stdio.h>
# include<stdlib.h>

int main()
{
    int columns;

    printf("enter the columns of array:");
    scanf("%d", &columns);

    int *arr[columns]=(int * [columns]) malloc(columns*sizeof(int));

        for (int j = 0; j < columns; j++)
            {
                printf("\nenter the %d th element:",j);
                scanf("%d",*(arr+i)));          // cuz the value at arr[i][j] is an address
            }

    printf ("\n your entered elements are:\n");
 
        for (int j = 0; j < columns; j++)
        {
            printf(" %d", *(arr[i]));
        }
    return 0;
}

