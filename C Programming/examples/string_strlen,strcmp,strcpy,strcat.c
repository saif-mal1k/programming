#include<stdio.h>
#include<conio.h>

int main()
{
    char str[10];
    char str1[]="hellow";
    char str2[]="fellow";
    printf("strlen:%d",strlen(str1));
    printf("strcmp:%d",strcmp(str1,"hellow"));
    strcpy(str,str2);
    puts(str);
    return 0;
}
