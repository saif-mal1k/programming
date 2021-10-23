# include<stdio.h>
# include<conio.h>

void main()
{
    int b,c;
   int v = &b;
   int &c = b;
    printf("%d : %d\n",v,&b);
    printf("%d : %d\n",&c,&b);

}
