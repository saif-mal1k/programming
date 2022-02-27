#include<stdio.h>
#include<conio.h>
int main()
{
    /*a combination of triad no have
    1.each number is a three digit no.
    2.all the digits in three no,s (total 9 digits) should be different.
    3.second no should be twice of first no and third no should be thrice of first no.*/

    int fir,sec,check,tir,no[4],i,j,rem[10];
    fir=100;
    start:
        sec=2*fir;
        tir=3*fir;
        while(tir<999)
        {
            no[1]=fir;
            no[2]=sec;
            no[3]=tir;
            i=1,j=1;
            while(i<4)
            {
                while(no[i]>0)
                {
                    rem[j]=no[i]%10;
                    no[i]/=10;
                    j++;
                }
                i++;
            }
            j=1;
            while(j<10)
            {
                check=rem[j],i=j+1;
                while(i<10)
                {
                    if(check==rem[i])
                    {
                        fir++;
                        goto start;
                    }
                    i++;
                }
                j++;
            }
            printf("\n\n\t%d\t%d\t%d",fir,sec,tir);
            fir++;
        }
        printf("\n\n\n\n");
    return 0;
}
