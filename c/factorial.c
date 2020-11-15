#include <stdio.h>
#include <stdlib.h>
#include <string.h>

unsigned long int factorial(int n)
{
  if (n <= 1)
  {
    return 1;
  }
  return n * factorial(n - 1);
}

void run_factorial(int argc, char *argv[])
{
  int n;
  if (argc >= 3)
  {
    n = atoi(argv[2]);
  }
  else
  {
    printf("Missing parameter for factorial!\n");
    return;
  }
  if (argc == 4)
  {
    if (strcmp(argv[3], "val") == 0 || strcmp(argv[3], "get") == 0)
    {
      printf("%lu\n", factorial(n));
    }
    else
    {

      printf("%d! = %lu\n", n, factorial(n));
    }
  }
  else
  {
    printf("%d! = %lu\n", n, factorial(n));
  }
}
