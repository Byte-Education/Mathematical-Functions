from sys import argv
from random import randint


def gen(n, low=-10, high=10):
    print(f"Getting {n} numbers from {low} to {high}")
    nums = []
    for _ in range(n):
        nums.append(randint(low, high))
    return nums


def main(args):
    args = args[1:]
    for i in range(len(args)):
        args[i] = int(args[i])
    if len(args) == 0:
        print('No parameters given, defaulting to "10 -10 10"')
        args.append(10)
        args.append(-10)
        args.append(10)
    elif len(args) == 1:
        print('No min or max given, defaulting to "-10 10"')
        args.append(-10)
        args.append(10)
    elif len(args) == 2:
        print('No max given, defaulting to "10"')
        args.append(10)
    print(gen(args[0], args[1], args[2]))


if __name__ == "__main__":
    main(argv)
