from cs50 import get_int

def main():
    height = get_height()
    for i in range(height):
        for j in range(height - i):
            print("#", end="")
            j += 1
    print()

def get_height():

    while True:
        try:
            n = int(input("Height: "))
            if n > 0:
                return n
        except ValueError:
            print("Not an integer")

main()