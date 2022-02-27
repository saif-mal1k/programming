#include<stdio.h>
#include<math.h>
struct data entry();
void print(int,struct data);
int validation(struct data);
int totaldays(struct data,struct data);
int totalmonths(struct data,struct data);
int totalyears(struct data,struct data);
int remainingdays(struct data);
struct data
{
    int d,m,y;
};
int main()
{
    struct data e[4];
    int i;
    e[1]=entry();
    e[2]=entry();
    for(i=1;i<3;i++)
    {
        print(i,e[i]);
    }
    e[3].d=totaldays(e[1],e[2]);
    e[3].m=totalmonths(e[1],e[2]);
    e[3].y=totalyears(e[1],e[2]);
    printf("\nREMAINING DAYS: about %d days",e[3].d);
    printf("\nREMAINING MONTHS: about %d months",e[3].m);
    printf("\nREMAINING YEARS: about %d years",e[3].y);
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
int totaldays(struct data s1,struct data s2)
{
    //to calculate no of days from year1 to year2
    int sum,yeardays,y1days,y2days,arti;
    sum=0;
    arti=s1.y;
    while (arti<s2.y)
    {
        if(arti%100!=0&&arti%4==0||arti%400==0)
            sum=sum+366;
        else
            sum=sum+365;
        arti++;
    }
    yeardays=sum;
    y2days=remainingdays(s2);
    y1days=remainingdays(s1);
    sum=(yeardays+y2days-y1days)+(s2.d-s1.d);
    return (sum);
}
int remainingdays(struct data s1)
{
        //to calculate passeed days
    int i=1,sum=0;
    while (i<=s1.m)
    {
        if(i==1 || i==3 || i==5 || i==7 || i==8 || i==10 || i==12 )
            sum=sum+31;
        else if (i==2)
        {
            if(s1.y%100!=0&&s1.y%4==0||s1.y%400==0)
                sum=sum+29;
            else
                sum=sum+28;
        }
        else if(i==4 || i==6 || i==9 || i==11 )
            sum=sum+30;
        i++;
    }
    return (sum);
}
int totalyears(struct data s1,struct data s2)
{
    return(s2.y-s1.y);
}
int totalmonths(struct data s1,struct data s2)
{
    int ans;
    ans=totalyears(s1,s2)*12 + s2.m - s1.m;
    return (ans);
}
