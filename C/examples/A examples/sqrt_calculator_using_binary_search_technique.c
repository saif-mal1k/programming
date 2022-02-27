#include<stdio.h>
#include<conio.h>
void sqart();
//recall();
int main()
{
    int ans=121;
    printf("welcome to the simple world of sqrt calculator");
    while(1)
    {
    sqart();
   // recall();
   // printf("\n ***wanna go again***\n press y/n:");
    //scanf("%d",ans);
    //if(ans=='n')
      //  break;
    }

    return 0;
}
sqart()
{
    float ans,l,u,org;
    int arf;
    printf("\n\nenter the value: ");
    scanf("%f",&org);
    arf=org*org;
    l=0;
    u=org;
    ans=(l+u)/2;
    while(arf>0)
    {
        if(org==ans*ans)
            break;
        if(org>ans*ans)
        {
            l=ans;
            ans=(l+u)/2;
        }
        else if(org<ans*ans)
        {
            u=ans;
            ans=(l+u)/2;
        }
        arf--;
    }
    printf("orgians=%f",ans);
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
