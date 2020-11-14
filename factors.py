from sys import argv
from random import randint


def factors(n):
    nums = []
    for i in range(2, n + 1 // 2):
        if n % i == 0:
            nums.append(i)
    return nums


def gen(n, low, high):
    print(f"Generating {n} numbers from {low} to {high}")
    nums = []
    for _ in range(n):
        nums.append(randint(low, high))
    return nums


def print_values(num):
    factor_list = factors(num)
    if(len(factor_list) == 0):
      print(num, "Prime Number; No Factors")
    else:
      print(num, len(factor_list), factor_list)


def values(n, low=10, high=100):
    nums = gen(n, low, high)
    print("Number, Number of Factors, Factors")
    for num in nums:
        print_values(num)


def main(args):
    args = args[1:]
    if len(args) == 0 or args[0] != "get":
        for i in range(len(args)):
            args[i] = int(args[i])
        if len(args) == 0:
            print('No arguments, defaulting to "10 10 100"')
            args.append(10)
            args.append(10)
            args.append(100)
        elif len(args) == 1:
            print('Missing min and max, defaulting to "10 100"')
            args.append(10)
            args.append(100)
        elif len(args) == 2:
            if args[1] < 100:
                print('Missing max, defaulting to "100"')
                args.append(100)
            else:
                GAP = 100
                print(f'Missing max, defaulting to "{args[1] + GAP}"')
                args.append(args[1] + GAP)
        values(args[0], args[1], args[2])
    else:
        if len(args) == 1:
            print(
                "Missing argument to check! Try again! Run as `python3 factors.py get n`"
            )
            return
        for i in range(1, len(args)):
            args[i] = int(args[i])
        print_values(args[1])


if __name__ == "__main__":
    main(argv)
