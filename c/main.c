#include <stdio.h>
#include <string.h>
#include "factors.h"
#include "gcf.h"
#include "lcm.h"
#include "gen.h"

void print_menu()
{
  printf("Options:\n");
  printf("./calc gen `n low high`: Get `n` random numbers from `low` to `high`\n");
  printf("./calc factors get `n`: Get the number and the factors of given number\n");
  printf("./calc factors `n low high`: Get the number of `n` factors within the range of `low` to `high`\n");
  printf("./calc gcf `a b`: Get the Greatest Common Factor between `a` to `b`\n");
  printf("./calc lcm `a b`: Get the Least common multiple between `a` to `b`\n");
}

int main(int argc, char *argv[])
{
  if (argc == 1)
  {
    printf("Missing parameters, Try again!!\n");
    print_menu();
    return 1;
  }
  else if (argc == 2 && ((strcmp(argv[1], "-h") == 0) || strcmp(argv[1], "--help") == 0))
  {
    print_menu();
    return 1;
  }

  if (strcmp(argv[1], "factors") == 0)
  {
    run_factors(argc, argv);
  }
  else if (strcmp(argv[1], "gcf") == 0 || strcmp(argv[1], "hcf") == 0)
  {
    run_gcf(argc, argv);
  }
  else if (strcmp(argv[1], "lcm") == 0)
  {
    run_lcm(argc, argv);
  }
  else if (strcmp(argv[1], "gen") == 0)
  {
    run_gen(argc, argv);
  }

  return 0;
}