#include<stdio.h>
#include<conio.h>
int binary_search(int arr[],int n,int ele);
int main()
{
    int index=1,arr[9]={6,8,9,12,14,16,18,21,24},i,ele;
    printf("entered elements:\n");
    for(i=0;i<9;i++)
        printf(" %d ",arr[i]);
    printf("\nenter the element to search:");
    scanf("%d",&ele);
    index=binary_search(arr,9,ele);
    if(index==-1)
        printf("not found");
    else
        printf("element found at:%d",index);
    return 0;
}

int binary_search(int arr[],int n,int ele)
{
    int lower=0,upper=n,index;
    do
    {
        index=(lower+upper)/2;
        if(ele==arr[index])
        {
            return index;
        }
        else if(ele>arr[index])
        {
            lower=index+1;
        }
        else if(ele<arr[index])
        {
            upper=index-1;
        }
    }
    while(lower!=upper);
     return(-1);
}
