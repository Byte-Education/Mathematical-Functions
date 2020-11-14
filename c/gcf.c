#include <stdio.h>
#include <stdlib.h>

int greatest_common_factor(int a, int b){
  while(b > 0){
    int c = a;
    a = b;
    b = abs(c - b);
  }
  return a;
}

int run_gcf(int argc, char *argv[]){
  if(argc < 4){
    printf("Missing parameters for a and b, try again");
    return 1;
  }
  printf("%d\n", greatest_common_factor(atoi(argv[2]), atoi(argv[3])));
  return 0;
}