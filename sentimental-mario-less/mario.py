# TODO
# Goal is to make right-aligned pyramid of blocks(#)
from cs50 import get_int

def main(n):
       while True:
        n = int(input("Height: "))
        draw(n)
        if n > 0:
            break

def draw(n):
    draw(n - 1)
    for i in range(n):
        i += 1
        print("#")

main()


