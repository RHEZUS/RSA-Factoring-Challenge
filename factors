#!/usr/bin/python3
if __name__ == "__main__":
    import sys


def factorize(num):
    for i in range(2, num):
        if num % i == 0:
            print("{}={:.0f}*{}".format(num, num / i, i))
            break


length = len(sys.argv)
if length != 2:
    print("Usage: factors <file>")
    exit(0)
try:
    with open(sys.argv[1], "r") as file:
        lines = file.readlines()
except FileNotFoundError:
    print("Error: file <{}> not found".format(sys.argv[1]))
    exit(0)
for line in lines:
    num = int(line.strip())
    factorize(num)
