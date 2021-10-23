#include<math.h>
#include<stdio.h>
int powe(int,int);
int main(void)
{
    int i=0,rel,no,ans=0,po,rem;
    int choice;
    printf("enter your choice for decimal to:-\n2.binary\n8.octal\n16.hexadecimal\nyour choice:");
    scanf("%d",&choice);
    if(choice==2||choice==8||choice==16)
{
    printf("\nokay! Now please enter a decimal no:");
    scanf("%d",&no);
    rel=no;
     while(no>0)
    {
        rem=no%choice;
        ans=(rem*powe(10,i))+ans;
       /* po=powe(10,i);
        printf("\n pow(10,%d):%d",i,po);
        printf(" no:%d",no);
        printf(" rem:%d",rem);
        printf(" i:%d",i);
        printf(" ans:%d",ans);
        */no=no/choice;
        i++;
    }
    //if(choice==2)
        printf("\nanswer is: %d",ans);
}
    /*else if(choice==8)
        printf("\ncorrect answer:%o\t calculated answer:%d",rel,ans);
    else if(choice==16)
    {
        printf("\ncorrect answer:%X\t calculated answer:%d",rel,ans);
    }*/
    else
        printf("\n\n\n\n\a\a*******wrong choice********\a\a\a");
    return 0;
}
int powe (int a,int b)
{
    int ans=1;
    while(b>0)
    {
        ans=ans*a;
        b--;
    }
    return ans;
}
