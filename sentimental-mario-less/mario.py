# TODO
# Goal is to make right-aligned pyramid of blocks(#)
from cs50 import get_int

size = get_int("Size: ")

#
i = 0
for i in range(size):
    i += 1
    j = 0
    for j in range (size - i):
        j += 1
        print(" ")
        print()
    k = 0
    for k in range(i + 1):
        k -= 1
        print("#")
