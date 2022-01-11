#include<stdio.h>
#include<conio.h>
void sqart(float,int);
float pow(float,int);
//recall();
int main()
{
    int root;
    float org;
    printf("welcome to the simple world of root calculator");
    while(1)
    {
    printf("\n\nenter the value: ");
    scanf("%f",&org);
    printf("which root you want: ");
    scanf("%d",&root);
    sqart(org,root);
   // recall();
   // printf("\n ***wanna go again***\n press y/n:");
    //scanf("%d",ans);
    //if(ans=='n')
      //  break;
    }

    return 0;
}
sqart(float org,int root)
{
    float ans,l,u;
    int arf;
    arf=org;
    arf;
    l=0;
    u=org;
    ans=(l+u)/2;
    while(arf>0)
    {
        if(org==pow(ans,root))
            break;
        if(org>pow(ans,root))
        {
            l=ans;
            ans=(l+u)/2;
        }
        else if(pow(ans,root))
        {
            u=ans;
            ans=(l+u)/2;
        }
        arf--;
    }
    printf("orgians=%f",ans);
}
float pow(float ans,int i)
{
    float calc=1;
    while(i>0)
    {
        calc*=ans;
        i--;
    }
    return(calc);
}

/*
recall()
{
    int loop;
    char looop[6];
    printf("\n*****TYPE AGAIN IF WANNA GO AGAIN****\n");
    gets(looop);
    printf("you typed :");
    puts(looop);
    if(looop=="again" || looop=="AGAIN")
    {
        main();
    }
    else
    {
        printf("thanks for support");
    }
}
*/
