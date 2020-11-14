# Mathematical Functions

Mathematical functions to help with mathematics classes

## Running

Python and C versions both exist, Java versions may be added soon

### Python options

Navigate to `python` folder (`cd python`)

Currently supports the following:

`python3 driver.py factors n low high`: Generate a list of numbers with the amount of factors along with their factors.

`python3 driver.py factors get n`: Get the factors of a value.

`python3 driver.py gen n low high`: Generate n random numbers from a low to high value.

`python3 driver.py gcf a b`: Get the greatest common factor of a and b

`python3 driver.py lcm a b`: Get the least common multiple of a and b

### C options

Navigate to C folder (`cd c`)

Run `make`, then `./calc -h` for all options. Follow options available

### C Options post make

`./calc gen n low high`: Get `n` random numbers from `low` to `high`

`./calc factors get n`: Get the number and the factors of given number

`./calc factors n low high`: Get the number of `n` factors within the range of `low` to `high`

`./calc gcf a b`: Get the Greatest Common Factor between `a` to `b`

`./calc lcm a b`: Get the Least common multiple between `a` to `b`
