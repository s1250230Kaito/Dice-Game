#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void){ 
  int s1,s2;
  char name[10];
  srand(time(NULL));

  printf("What is your name?\n> ");
  scanf("%s",name);

  printf("Hello, %s!\n",name);
  
  printf("Rolling the dice ...\n");
  
  s1 = rand() % 6 + 1;
  s2 = rand() % 6 + 1;
 
  printf("Die 1: %d\n",s1);
  printf("Die 2: %d\n",s2);
  printf("Total value: %d\n",s1+s2);

  return 0;
}

