#include<stdio.h>
#include<conio.h>

int main()
{
    char str[10];
    char str1[12]="hellow";
    char str2[]="fellow";
    printf("strlen:%d\t",strlen(str1));
    printf("strcmp:%d\t",strcmp(str1,"hellow"));
    strcpy(str,str2);
    puts(str);
    strcat(str1,str2);
    puts(str1);
    return 0;
}
