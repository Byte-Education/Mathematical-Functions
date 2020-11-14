import gen
import gcf
import factors
import lcm
from sys import argv


def menu():
    OPTIONS = {
        "factors n low high": "Generate a list of numbers with the amount of factors along with their factors.",
        "factors get n": "Get the factors of a value.",
        "gen n low high": "Generate n random numbers from a low to high value.",
        "gcf a b": "Get the greatest common factor of a and b",
        "lcm a b": "Get the least common multiple of a and b"
    }
    print("\nOptions:\n")
    for key in OPTIONS:
        print(f"python3 driver.py {key}")
        print(f"{OPTIONS.get(key)}")
        print()


def main():
    args = argv[1:]
    if len(args) == 0:
        menu()
        return
    else:
        if args[0] == "factors":
            factors.main(args)
        elif args[0] == "gen":
            gen.main(args)
        elif args[0] == "gcf" or args[0] == "hcf":
            gcf.main(args)
        elif args[0] == "lcm":
            lcm.main(args)


main()