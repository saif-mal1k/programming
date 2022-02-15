#include<stdio.h>
#include<conio.h>
int main()
{
int a = 5;
const int b = 1;
int c = a + b * 10; // this is an expression

//int,const are keywords
//a,c are variables 
//b is a constant
//5, 1, 10 are literals
// *,+,= are operators
//variables, constant and literals used in above expression are operands. 

printf("%d",c); // output is 15,  why 15? BODMAS rule don't apply 

return 0;
}