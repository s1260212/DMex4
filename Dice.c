
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
 
int main(void){
 
  int s,t;
 

  srand(time(NULL));
 

  s = rand() % 6 + 1;
 

  printf("Dice 1: %d \n", s);

 

  t = rand() % 6 + 1;
 

  printf("Dice 2: %d \n", t);

  if(u >= 8){printf("You won\n");}
  else{printf("You lost\n");}

 
  return 0;
}
