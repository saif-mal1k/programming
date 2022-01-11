#include<stdio.h>
#include<conio.h>
int gcd(int,int);
int main()
{
    int no1,no2;
    printf("enter the no's this way \"a,b\" :");
    scanf("%d,%d",&no1,&no2);
    printf("gcd:%d",gcd(no1,no2));
    return(0);
}
int gcd(int no1,int no2)
{
    static int i=2,cal=1;
    //printf("\ni: %d  ",i);
    if(i<=(no1<no2?no1:no2))
    {
      //  printf("if: %d  ",i<=(no1<no2?no1:no2));
        if(no1%i==0 && no2%i==0)
        {
        //    printf("inif: %d  ",no1%i==0 && no2%i==0);
            no1=no1/i;
          //  printf("no1: %d  ",no1);
            no2=no2/i;
            //printf("no2: %d  ",no2);
            cal=i;
            return(cal*gcd(no1,no2));
        }
        else
            {
                i++;
              //  printf("i: %d  ",i);
                return(gcd(no1,no2));
            }
    }
    else
    {
        printf("\n\nlcm: %d\t",cal*no1*no2);
        return(1);        ///this is for hcf for lcm  "return(no1*no2)";
    }
}
