#include <stdio.h>
#include <string.h>
#include "factors.h"
#include "gcf.h"
#include "lcm.h"
#include "gen.h"
#include "prime.h"
#include "factorial.h"

void print_menu()
{
  char* bin="./calc";
  printf("Options:\n");
  printf("%s gen `n low high`: Get `n` random numbers from `low` to `high`\n", bin);
  printf("%s factors get `n`: Get the number and the factors of given number\n", bin);
  printf("%s factors `n low high`: Get the number of `n` factors within the range of `low` to `high`\n", bin);
  printf("%s gcf `a b`: Get the Greatest Common Factor between `a` to `b`\n", bin);
  printf("%s lcm `a b`: Get the Least common multiple between `a` to `b`\n", bin);
  printf("%s prime `n`: Check if a number `n` if prime or not\n", bin);
  printf("%s factorial `n`: Get `n` factorial\n", bin);
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
  else if(strcmp(argv[1], "prime") == 0){
    run_prime(argc, argv);
  }
  else if(strcmp(argv[1], "factorial") == 0){
    run_factorial(argc, argv);
  }

  return 0;
}