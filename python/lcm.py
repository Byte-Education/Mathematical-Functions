from gcf import greatest_common_factor
def least_common_multiple(a,b):
  return int((a * b) / greatest_common_factor(a,b))


def main(args):
    args = args[1:]
    if(len(args) == 0):
        print("Missing a and b! Try again with a and b provided!")
        return
    elif(len(args) == 1):
        print("Missing b value! Try again!")
        return
    print(f"Least common multiple between {args[0]} and {args[1]} is: {least_common_multiple(int(args[0]), int(args[1]))}")