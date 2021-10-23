#include<stdio.h>
#include<conio.h>
void selection_sort(int arr[8],int n_element);
int main()
{
    int arr[]={4,3,2,5,9,7,8,1};
    selection_sort(arr,8);
    return 0;
}
selection_sort(int arr[8],int n_element)
{
    int i,j,min;
    for(i=0;i<n_element-1;i++)///sorting the array,in the begin n g whole is unsorted therefore 0,at end last element will already be sorted therefore n_element-1
    {
        min=i;                ///using unsorted array's 1st element to compare
        for(j=i+1;j<n_element;j++)///unsorted array's 1st element will be compared with the next element to find the smallest element
        {
            if(arr[j]<arr[min])
            min=j;   ///copying smallest element's index
        }
        if(i!=min)
        arr[i]=arr[min]+arr[i];
        arr[min]=arr[i]-arr[min];  ///swapping smallest element with 1st element of unsorted array
        arr[i]=arr[i]-arr[min];
        ///now 1st element of unsorted array will be in sorted array therefore i increment to sort the remaining unsorted part
    }
    printf("\nsorted array:");
    for(i=0;i<n_element;i++)
        printf(" %d ",arr[i]);

}
