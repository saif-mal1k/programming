#include<stdio.h>
#include<conio.h>
void bubble_sort(int arr[8],int n_element);
int main()
{
    int arr[]={4,3,2,5,9,7,8,1};
    bubble_sort(arr,8);
    return 0;
}
bubble_sort(int arr[8],int n_element)
{
    int i,j,flag;
    for(i=0;i<n_element-1;i++)///1 the last remaining element will already be sorted hence i<n-1
    {
        flag=0;               ///to check if array is already sorted
        for(j=0;j<n_element-1-i;j++) ///2 since element[j] is compared with element [j"+1"] no need to increment to last index hence j<n-1, ->
        {                              /// -> since last element's of array is already sorted in previous pass hence no need to compare sorted part hence j<n-1-i
            if(arr[j]>arr[j+1])///3 to swap if 1st > 2end
            {
                arr[j]=arr[j+1]+arr[j];
                arr[j+1]=arr[j]-arr[j+1];
                arr[j]=arr[j]-arr[j+1];
                flag=1;       /// since swap is done
            }
        }
        if(flag==0)         ///if no swap in last pass flag should be 0 that means it's already sorted
            break;
    }
    printf("\nsorted array:");
    for(i=0;i<n_element;i++)
        printf(" %d ",arr[i]);
}
