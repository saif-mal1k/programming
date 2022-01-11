#include<stdio.h>
#include<conio.h>
int main()
{
    int amount,tk;
    printf("enter the amount:");
    scanf("%d",&amount);
    tk=amount/2000;
    amount%=2000;
    if(tk!=0)
    printf("\nTWO THOUSAND RUPEE NOTES:%d\n",tk);
    tk=amount/500;
    amount%=500;
    if(tk!=0)
    printf("\nFIVE HUNDRED RUPEE NOTES:%d\n",tk);
    tk=amount/100;
    amount%=100;
    if(tk!=0)
    printf("\nHUNDRED RUPEE NOTES:%d\n",tk);
    tk=amount/50;
    amount%=50;
    if(tk!=0)
    printf("\nFIFTY RUPEE NOTES:%d\n",tk);
    tk=amount/20;
    amount%=20;
    if(tk!=0)
    printf("\nTWENTY RUPEE NOTES:%d\n",tk);
    tk=amount/10;
    amount%=10;
    if(tk!=0)
    printf("\nTEN RUPEE NOTES:%d\n",tk);
    tk=amount/5;
    amount%=5;
    if(tk!=0)
    printf("\nFIVE RUPEE NOTES:%d\n",tk);
    tk=amount/2;
    amount%=2;
    if(tk!=0)
    printf("\nTWO RUPEE NOTES:%d\n",tk);
    if(amount==1)
        printf("\n**plus one toffee**\n:-))\n\n");
}
