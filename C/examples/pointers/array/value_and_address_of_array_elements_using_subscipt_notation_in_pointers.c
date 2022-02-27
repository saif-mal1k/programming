#include<stdio.h>
#include<conio.h>
int main()
{
    int *pointr,add=4,arrat[4]={1,2,3,4},*p1=arrat+1,i,*p2;

    p2=arrat;

    for(i=0;i<4;i++)
        printf(" value:%d address:%p ",p2[i],&p2[i]); //since *(arr+i)=>arr[i], hence *(ptr+i)=>ptr[i] from concept of subscript notation
    //printf(" value:%d address:%d ",*p2,p2);

    //printf("difference:%d",p2-p1);

    return 0;
}
