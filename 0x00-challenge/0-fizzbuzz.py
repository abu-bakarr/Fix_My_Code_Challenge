#!/usr/bin/python3
""" FizzBuzz
"""
import sys


def fizzbuzz(data):
    if data < 1:
        return

    final_result = []
    for i in range(1, data + 1):
        if (i % 3) == 0 and (i % 5) == 0:
            final_result.append("FizzBuzz")
        elif (i % 3) == 0:
            final_result.append("Fizz")
        elif (i % 5) == 0:
            final_result.append("Buzz")
        else:
            final_result.append(str(i))
    print(" ".join(final_result))


if __name__ == '__main__':
    if len(sys.argv) <= 1:
        print("Missing number")
        print("Usage: ./0-fizzbuzz.py <number>")
        print("Example: ./0-fizzbuzz.py 89")
        sys.exit(1)

    number = int(sys.argv[1])
    fizzbuzz(number)
