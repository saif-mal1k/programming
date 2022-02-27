#include<stdio.h>
#include<math.h>
struct data entry();
void print(int,struct data);
int validation(struct data);
struct data
{
    int d,m,y;
};
int main()
{
    struct data e[2];
    int i;
    e[1]=entry();
    e[2]=entry();
    for(i=1;i<3;i++)
    {
            print(i,e[i]);
    }
    return 0;
}
struct data entry ()
{
    struct data s;
    int valida;
    printf("enter the date in format \"dd/mm/yyyy\"  :");
    scanf("%d/%d/%d",&s.d,&s.m,&s.y);
    valida=validation(s);
    if (valida)
        return(s);
    else
        entry();
};
int validation (struct data s)
{
    int fd=28,flag=1;
  if(s.y%100!=0 && s.y%4==0 || s.y%400==0)
        {
                fd==29;
                //printf("\"LEAP YEAR\"\n");
        }
        if(s.m<1 || s.m>12 || s.d<1 || s.d>31)
            flag=0;
        else if(s.m==2 && s.d>fd)
            flag=0;
        else if ((s.m==4 || s.m==6 || s.m==9 || s.m==11)&&(s.d>30))
            flag=0;
        if(flag==0)
            {
                printf("\"wrong date\"\n::::::ENTER CORRECT DATE:::::::\n");
                return (0);
            }
        else
           {
               printf("valid DATE\n");
               return (1);
           }
};
void print(int i,struct data s)
{
    printf("your \"%d\" entry:",i);
    printf("%d/%d/%d\n",s.d,s.m,s.y);
};
