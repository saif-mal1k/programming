#include<stdio.h>
#include<conio.h>
int max(int arr[]);
int main()
{
    int i,arr[5],sum=0,brr[]={1,2,3,4,5};
    for(i=0;i<5;i++)//scan array element "input"
    {
        scanf("%d",&arr[i]);
    }
    for(i=0;i<5;i++)//calculate sum
    {
        sum=sum+arr[i];
    }
    printf(" sum:%d ",sum);
    for(i=0;i<5;i++)//copy array to brr array
    {
        brr[i]=arr[i];
    }
    printf(" max:%d",max(arr));
    sum=brr[0];
    for(i=0;i<5;i++) //min element
    {
        if(brr[i]<sum)
            sum=brr[i];
    }
    printf(" min:%d",sum);
    sum=0;
    for(i=4;i>-1;i--)//reverse elements
    {
        brr[sum++]=arr[i];
    }
    printf("\nreverse:\n");
    for(i=0;i<5;i++)
    {
        printf(" %d\n",brr[i]);
    }

}
int max(int brr[])
{
    int sum=0,i;
    for(i=0;i<5;i++) //max element
    {
        if(brr[i]>sum)
            sum=brr[i];
    }
    return sum;
}
