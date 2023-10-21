from cs50 import get_int

# Prompt user for integers
x = get_int("What's x? ")
y = get_int("What's y? ")


# Indention is important and should be consistent in Python. It should be done cautiously
if x < y:
    print("x is less than y")
elif x > y:
    print("x is greater than y")
else:
    print("x is equals to y")