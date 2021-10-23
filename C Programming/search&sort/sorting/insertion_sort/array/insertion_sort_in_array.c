#include<stdio.h>
#include<conio.h>
void insertion_sort(int arr[8],int n_element);
int main()
{
    int arr[]={5,3,2,5,9,7,8,1};
    insertion_sort(arr,8);
    return 0;
}
insertion_sort(int arr[8],int n_element)
{
    int i,j,flag;
    for(i=0;i<n_element;i++)
    {
        for(j=i+1;j>0;j--)
        {
            if(arr[j]<arr[j-1])
            {
                arr[j]=arr[j-1]+arr[j];
                arr[j-1]=arr[j]-arr[j-1];
                arr[j]=arr[j]-arr[j-1];
               // flag=1;       /// since swap is done
            }
            else if(arr[j]>=arr[j-1])
                break;

        }
    }
    printf("\nsorted array:");
    for(i=0;i<n_element;i++)
        printf(" %d ",arr[i]);
}
