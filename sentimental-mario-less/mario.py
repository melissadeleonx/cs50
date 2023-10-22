# TODO
# Goal is to make right-aligned pyramid of blocks(#)
from cs50 import get_int

n = int(input("Height: "))

def main(n):
       while True:
        draw(n)
        if n > 0:
            break

def draw(n):
    for i in range(n):
        i += 1
        print("#")

main(n)


