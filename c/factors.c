#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "gen.h"

int FACTORS_LIMIT = 30;

int factors(int n, int *nums)
{
  int count = 0;
  *(nums + count++) = n;
  for (int i = 2; i < (n + 1 / 2); i++)
  {
    if (n % i == 0)
    {
      *(nums + count++) = i;
    }
  }
  return count;
}

int generate_factors(int n, int low, int high, int *nums, int **factor_list)
{
  int generated = gen(n, low, high, nums);
  for (int i = 0; i < n; i++)
  {
    factors(nums[i], factor_list[i]);
  }
  return generated;
}

int run_factors(int argc, char *argv[])
{
  int n, low, high, *nums;
  if (argc == 4 && strcmp(argv[2], "get") == 0)
  {
    n = atoi(argv[3]);
    nums = (int *)(malloc(sizeof(int) * n));
    
    factors(n, nums);
    printf("Number; factors\n");
    for (int i = 0; i < n; i++)
    {
      if(nums[i] == 0){
        break;
      }
      printf("%d ", nums[i]);
    }
    printf("\n");
    free(nums);
    return 0;
  }
  switch (argc)
  {
  case 2:
    n = 10;
    low = 10;
    high = 100;
    printf("Missing all parameters, defaulting to %d %d %d\n", n, low, high);
    break;
  case 3:
    n = atoi(argv[2]);
    low = 10;
    high = 100;
    printf("Missing min and max, defaulting to %d %d\n", low, high);
    break;
  case 4:
    n = atoi(argv[2]);
    low = atoi(argv[3]);
    if (low >= 100)
    {
      high = low + 100;
    }
    else
    {
      high = 100;
    }
    printf("Missing max, defaulting to %d\n", high);
    break;
  case 5:
    n = atoi(argv[2]);
    low = atoi(argv[3]);
    high = atoi(argv[4]);
    break;
  }

  nums = (int *)(malloc(sizeof(int) * n));
  int *factor_list[n];
  for (int i = 0; i < n; i++)
  {
    factor_list[i] = (int *)(malloc(sizeof(int) * FACTORS_LIMIT));
  }
  generate_factors(n, low, high, nums, factor_list);
  printf("Number; factors\n");
  for (int i = 0; i < n; i++)
  {
    for (int j = 0; j < 20; j++)
    {
      if (factor_list[i][j] != 0)
      {
        printf("%d ", factor_list[i][j]);
      }
    }
    printf("\n");
  }

  for (int i = 0; i < n; i++)
  {
    free(factor_list[i]);
  }
  free(nums);

  return 0;
}