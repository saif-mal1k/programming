#include<stdio.h>
#include<conio.h>

struct employee
{
    int id;
    char name[10];
    char address[20];
    long int contact;
};

int main()
{
    int i;
    struct employee e[4]={{121,"ajay","pl sharma road",0000116745},
                    {221,"parcha","ghaziabad",1165212176},
                    {321,"sumit","gour city sector 22",2237316745},
                    {421,"vijay","rdc rajnagar sector 45",3246342676}};
    for (i=0;i<4;i++)
        printf("%d.employee\t:%s\n",i+1,e[i].name);
    printf("enter s.no of employee you wanna view:");
    scanf("%d",&i);
    i--;
            printf("%s_id:\t%d\n",e[i].name,e[i].id);
            printf("%s_name:\t%s\n",e[i].name,e[i].name);
            printf("%s_address:\t%s\n",e[i].name,e[i].address);
            printf("%s_contact:\t%d\n",e[i].name,e[i].contact);
    printf("wanna update:(yes/no)i.e y/n :");
    //char choice;
    //scanf("%c",&choice);
    //if (choice=='y')
    //{
        //clrscr();
        printf("\n\n****************** ENTER YOUR CHOICE ******************\n\n1.UPDATE PREVIOUS DATA\n\n2.INSERT NEW DATA");
        printf("\nYOUR CHOICE:");
        scanf("%d",&i);
        //clrscr();
        switch(i)
        {
            case 1 :
                printf("enter employee id:");
                //int input;
                scanf("%d",&i);
                i=i/10;
                i=i/10;
                //i=input;
                i--;
            printf("1.%s_id:\t%d\n",e[i].name,e[i].id);
            printf("2.%s_name:\t%s\n",e[i].name,e[i].name);
            printf("3.%s_address:\t%s\n",e[i].name,e[i].address);
            printf("4.%s_contact:\t%d\n",e[i].name,e[i].contact);
            printf("what you wanna update :");
            scanf("%d",&i);
            printf("\nenter new value:");/
            switch(i)
            {
                case 1:
                    scanf("%d",&e[i].id);
                    break;
                case 4:
                    scanf("%d",&e[i].contact);
                    break;
                default:
                    printf("*********************** wrong field **************************");


            }
                break;
        }

        printf("*********************** wrong CHOICE **************************");

   // }
    return 0;
}
