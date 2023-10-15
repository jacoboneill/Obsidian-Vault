# How it Works
Two's Complement is a way of storing negative numbers in binary.

It works by using the MSB as the start of negative values. For example:

> 0110 = 6
> 1011 = -5


# Cons
It means that the max value of numbers that can be stored is over halved (consider the number of bits n: $\frac{n}{2} - 1$).

# Shortcut to Convert from Positive to Negative

To convert from a positive to negative value using Two's Complement, you can use the following steps:
1. Have a positive value `0011` | `3`
2. Invert the bits: `1100` | `-4`
3. Add 1: `1101` | `-3`