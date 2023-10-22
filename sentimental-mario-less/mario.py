# TODO
# Goal is to make right-aligned pyramid of blocks(#)
from cs50 import get_int

def right_brick(n):
    for i in range(n):
        i += 1
        for j in range(n - i):
            print(".")
            j += 1

while True:
    n = get_int("Height: ")
    if n > 0:
        break

right_brick(n)

