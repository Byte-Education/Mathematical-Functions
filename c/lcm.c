#include <stdio.h>
#include <stdlib.h>

#include "gcf.h"

int least_common_multiple(int a, int b)
{
  return (int)((a * b) / greatest_common_factor(a, b));
}

int run_lcm(int argc, char *argv[])
{
  if (argc < 4)
  {
    printf("Missing parameters a and b, try again!");
    return 1;
  }
  printf("Least common multiple between %d and %d is %d\n", atoi(argv[2]), atoi(argv[3]), least_common_multiple(atoi(argv[2]), atoi(argv[3])));
  return 0;
}