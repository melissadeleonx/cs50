from cs50 import get_string

answer = get_string("Do you agree? ")

if answer == "y" or "Y":
    print("Agreed")
elif answer == "n" or "N":
    print("Not Agreed")
else:
    print("No answer")