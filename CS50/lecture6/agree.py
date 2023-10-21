from cs50 import get_string

answer = get_string("Do you agree? ")

if answer == "y":
    print("Agreed")
elif answer == "n":
    print("Not Agreed")
else:
    print("No answer")