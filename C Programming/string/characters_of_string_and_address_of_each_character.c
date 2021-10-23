#include<stdio.h>
#include<conio.h>

int main()
{
    char str[]="welcome back",i;
    for(i=0;str[i]!='\0';i++)
    {
        printf("\nstr[%d]:%c\tadd:%p",i,str[i],str+i);
    }
    return 0;
}
