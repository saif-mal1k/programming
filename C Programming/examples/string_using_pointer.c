#include<stdio.h>
#include<conio.h>

int main()
{
    int i;
    char str[]="hellow";
    char *ptr=str;
    for (i=0;ptr[i]!='\0';i++)
        printf("\nstr_char:%c\tstr_add:%p",ptr[i],ptr+i);
    return 0;
}
