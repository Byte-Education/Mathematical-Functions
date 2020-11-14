def greatest_common_factor(a, b):
    while b > 0:
        a, b = b, abs(a - b)
    return a


def main(args):
    args = args[1:]
    if len(args) == 0:
        print("Missing a and b! Try again with a and b provided!")
        return
    elif len(args) == 1:
        print("Missing b value! Try again!")
        return
    print(
        f"Greatest common factor between {args[0]} and {args[1]} is: {greatest_common_factor(int(args[0]), int(args[1]))}"
    )
