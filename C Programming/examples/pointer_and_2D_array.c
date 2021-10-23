#include<stdio.h>
#include<conio.h>
int main()
{
   int arr[3][4]={{11,12,13},{21,22,23},{31,32,33}},i,j;  //value undeclared for array element is zero by default you'll see
   /// printing elements of an array
   printf("elements of the array:");
   for(i=0;i<3;i++)
   {
    for(j=0;j<4;j++)
        printf("\nidentity:%d,%d\t address:%X\t value:%d",i+1,j+1,&arr[i][j],arr[i][j]);
    printf("\n");
   }
    ///printing by pointer
    printf("\n\nelements of array by pointer notation:");
   for(i=0;i<3;i++)
   {                        ///arr points to 1st element i.e 1D array  ,
     for(j=0;j<4;j++)        ///*arr should print 1st element but since it is an array therefor prints address i.e *arr points to 1st element of 1D array
        printf("\nidentity:%d,%d\t address:%p\t value:%d",i+1,j+1,*(arr+i)+j,*(*(arr+i)+j));/// hence, *(*arr) prints that element
   printf("\n");
   }
    return 0;
}
///arr -> address of 1st element i.e 1D array
///*arr -> address of 1st element of 1st 1D array
