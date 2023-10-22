s = input("Do you agree? ")

#if s == 'y' or 'Y':
    #print("Agreed")
#elif s == 'n' or 'N':
    #print("Not Agreed")
#else:
    #print("Please enter Y or N")

if s.lower() in ["y", "yes"]:
    print("Agreed.")
elif s.lower() in ["n", "no"]:
    print("Not agreed.")
else:
    print("Please enter yes or no")




