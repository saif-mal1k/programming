#include<stdio.h>
#include<conio.h>

int factorial(int number, int accumulated_value)
{
  if(number == 1)
  {
    return accumulated_value;
  }
  else 
    return factorial(number-1, accumulated_value*number );
}

int main()
{
  printf("%d",factorial(5,1));

  return 0;
}
