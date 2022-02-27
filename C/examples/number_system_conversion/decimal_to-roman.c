#include<stdio.h>
#include<conio.h>
int times_calc(int);
times_prnt(char roman[],int);
deci_roman();
int decimal;
int main()
{
    int d=1;
    while(d==1)
    {
    printf("\nenter the decimal no:");
    scanf("%d",&decimal);
    printf("its roman form:");
    deci_roman();
    }
    return(0);
}
deci_roman()
{
   // decimal=d
    int val;
//printf("\n%d ",decimal);
    times_prnt("m",val=1000);


  //  printf("\n%d ",decimal);
    times_prnt("d",val=500);

    //printf("\n%d ",decimal);
    times_prnt("c",val=100);

   // printf("\n%d ",decimal);
    times_prnt("l",val=50);

  //  printf("\n%d ",decimal);
    times_prnt("x",val=10);

  //  printf("\n%d ",decimal);
    times_prnt("ix",val=9);

   // printf("\n%d ",decimal);
    times_prnt("v",val=5);

  //  printf("\n%d ",decimal);
    times_prnt("iv",val=4);

 //   printf("\n%d ",decimal);
    times_prnt("i",val=1);

}
times_prnt(char roman[2],int val)
{
    int nt=times_calc(val);
   // not=nt;
    while (nt>0)
    {
        printf("%s",roman);
        nt--;
    }
    //return(not);
}
int times_calc(int val)
{
    int nt=decimal/val;
    if(nt!=0)
        decimal%=val;
    return(nt);
}
