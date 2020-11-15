#include <stdio.h>
#include <time.h>
#include <stdlib.h>
#include <string.h>

int gen(int n, int low, int high, int *nums)
{
  time_t t;
  srand((unsigned)time(&t));
  for (int i = 0; i < n; i++)
  {
    *(nums + i) = rand() % high + low;
  }
  return n;
}

int run_gen(int argc, char *argv[])
{
  int n, low, high, *nums;
  switch (argc)
  {
  case 2:
    n = 10;
    low = -10;
    high = 10;
    printf("Missing all parameters, defaulting to %d %d %d\n", n, low, high);
    break;
  case 3:
    n = atoi(argv[2]);
    low = -10;
    high = 10;
    printf("Missing min and max, defaulting to %d %d\n", low, high);
    break;
  case 4:
    n = atoi(argv[2]);
    low = atoi(argv[3]);
    high = 10;
    printf("Missing max, defaulting to %d\n", high);
    break;
  case 5:
    n = atoi(argv[2]);
    low = atoi(argv[3]);
    high = atoi(argv[4]);
    break;
  }
  n = abs(n);

  nums = (int *)(malloc(sizeof(int) * n));
  gen(n, low, high, nums);
  for (int i = 0; i < n; i++)
  {
    printf("%d ", nums[i]);
  }
  printf("\n");
  free(nums);

  return 0;
}