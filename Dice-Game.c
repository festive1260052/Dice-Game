#include<stdio.h>
#include<stdlib.h>
#include <time.h>


int main() {
  char name[20];
  printf("What is your name? > ");
  scanf("%s",name);
  printf("Hello, %s!\n",name);
  
  int a,b;

  srand(time(NULL));
  int x = rand() % 2 + 1;
  if(x == 1) printf("%s don't play game\n");
  else{

  a = rand() % 6 + 1;
  b = rand() % 6 + 1;

  printf("Rolling the dice...\nDie 1: %d\nDie 2: %d\nTotal value: %d\n",a,b,a+b);

  
  int c = a + b;
  if(c > 7)printf("%s won\n",name);
  else printf("%s lost\n",name);
  }
  
  return 0;
}
