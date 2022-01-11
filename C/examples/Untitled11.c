#include<stdio.h>

void function(int &value1,int &value2);

int main (){

    int arg1=10,arg2=20;

    function(arg1,arg2);

        return 0;
}

void function(int &value1,int &value2){

    printf("updated value1 : %d\nvalue2 : %d",value1+10, value2+20);

}