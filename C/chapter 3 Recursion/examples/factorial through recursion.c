#include <stdio.h>

int factorial(int number){
  if (number == 1)
    return 1;
  else
    return (number * factorial(number - 1));
}

int main(){
  printf("%d", factorial(5));
  return 0;
}