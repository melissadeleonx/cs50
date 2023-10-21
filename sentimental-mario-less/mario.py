# TODO
# Goal is to make right-aligned pyramid of blocks(#)
from cs50 import get_int

size = get_int("Size: ")

# Demonstrates while loop
i = 0
for i in range(size):
    j = 1
    for j in range(size - i):
        print(".")
        k = 0
        for k in range(i + 1):
            print("#")
