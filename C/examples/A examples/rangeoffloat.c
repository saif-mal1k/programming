#include<stdio.h>
#include<conio.h>

void main()
{
    int n;
    again:
  printf("enter an int >=10:");
  scanf("%d",&n);
  ((n>=10)? printf("true"):printf("false"));
    goto again;
  getch();
}
