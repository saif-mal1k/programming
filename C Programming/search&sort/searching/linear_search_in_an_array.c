#include<stdio.h>
#include<conio.h>
#define max 50;
int linear_search(int arra[],int n,int ele);
int main()
{
    int index=1,arra[50],n,i,ele;
    printf("enter size:");
    scanf("%d",&n);
    printf("enter the elements:\n");
    for(i=0;i<n;i++)
        scanf("%d",&arra[i]);
    printf("enter the element to search:");
    scanf("%d",&ele);
    index=linear_search(arra,n,ele);
    if(index==-1)
        printf("not found");
    else
        printf("element found at:%d",index);
    return 0;
}

int linear_search(int arra[],int n,int ele)
{
    int flag=-1,i;
    for(i=0;i<n;i++)
    {
        if(arra[i]==ele)
        {
            return i;
        }
    }
    if(i>=n)
        return -1;
}
