#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>

bool is_prime(int n)
{
  for (int i = 2; i < n / 2; i++)
  {
    if (n % i == 0)
    {
      return false;
    }
  }
  return true;
}

void run_prime(int argc, char *argv[])
{
  int n;
  if (argc == 3)
  {
    n = atoi(argv[2]);
  }
  else
  {
    printf("Missing parameter for prime!\n");
    return;
  }
  if (is_prime(n))
  {
    printf("%d is prime!\n", n);
  }
  else
  {
    printf("%d is not prime!\n", n);
  }
}