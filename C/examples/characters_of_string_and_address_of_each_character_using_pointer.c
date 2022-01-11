#include<stdio.h>
#include<conio.h>

int main()
{
    char str[]="welcome back",i;
    char *p;
    p=str;
    while(*p!='\0')
    {
        printf("\n\t%c\t%p",*p,p);
        p++;
    }
    return 0;
}
