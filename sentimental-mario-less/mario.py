# TODO
# Goal is to make right-aligned pyramid of blocks(#)
from cs50 import get_int

size = get_int("Size: ")

# Demonstrates while loop
for i in range(size):
    for j in range(size - i):
        print(".")
    for k in range(i + 1):
        print("#")
