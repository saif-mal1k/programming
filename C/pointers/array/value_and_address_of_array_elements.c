#include<stdio.h>
#include<conio.h>
int main()
{
    int *pointr,add=4,arrat[4]={1,2,3,4},*p1=&arrat[0],i,*p2=arrat[0];

    for(i=0;i<4;i++)
    {
        printf("value:%d address:%p ",arrat[i],&arrat[i]);  ///can also use ("arrat+i") instead of("&arrat[i]") arrat act as pointer variable storing address of
                                                            /// first element of array and by pointer arithmetic "+i" moves pointer to next element of array
                                                            ///remember the %p value should be stored in pointer variable
    }

    return 0;
}
