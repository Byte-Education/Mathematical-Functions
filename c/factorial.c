#include <stdio.h>
#include <stdlib.h>

unsigned long int factorial(int n)
{
   if(n <= 1){
     return 1;
   }
   return n * factorial(n - 1);
}

void run_factorial(int argc, char *argv[])
{
  int n;
  if (argc == 3)
  {
    n = atoi(argv[2]);
  }
  else
  {
    printf("Missing parameter for factorial!\n");
    return;
  }
  printf("%d! = %lu\n", n, factorial(n));
}
