#include<stdio.h>
#include<conio.h>
void smallelefirst(int arr[8],int n_element);
int main()
{
    int arr[]={4,3,2,5,9,7,8,1};
    smallelefirst(arr,8);
    return 0;
}
smallelefirst(int arr[8],int n_element)
{
    int i,min=0;
    for(i=0;i<n_element;i++)
    {
        if(arr[i]<arr[min])
            min=i;   ///finding smallest element
    }
    arr[0]=arr[min]+arr[0];
    arr[min]=arr[0]-arr[min];
    arr[0]=arr[0]-arr[min];
    for(i=0;i<n_element;i++)
        printf(" %d ",arr[i]);

}
