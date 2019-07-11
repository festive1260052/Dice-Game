#include<stdio.h>
#include<stdlib.h>
#include <time.h>


int main() {
  int a,b;

  srand(time(NULL));

  a = rand() % 6 + 1;
  b = rand() % 6 + 1;

  printf("Rolling the dice...\nDie 1: %d\nDie 2: %d\nTotal value: %d\n",a,b,a+b);

  
  int c = a + b;
  if(c > 7)printf("You won\n");
  else printf("You lost\n");
  
  return 0;
}
