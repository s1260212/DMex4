
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
 
int main(void){

  char str[20];
  printf("What is your name?");
  scanf("%s",str);
  printf("> %s\n",str);
  printf("Hello,%s\n\n",str);
  
  int s,t;
 

  srand(time(NULL));
 

  s = rand() % 6 + 1;
 

  printf("Dice 1: %d \n", s);

 

  t = rand() % 6 + 1;
 

  printf("Dice 2: %d \n", t);
 
  return 0;
}
