from cs50 import get_string

s = get_string("Do you agree?\n")

# Original
if s == "Y" or s == "y":
    print("Agreed")
elif s == "N" or s == "n":
    print ("Not Agreed")

# Progress1
if s in ["Y", "y", "Yes", "yes"]:
    print("Agreed")
elif s in ["N", "n", "No", "no", "Nope"]:
    print ("Not Agreed")

# Progress2
if s.lower in [ "y",  "yes"]:
    print("Agreed")
elif s.lower in ["n","no"]:
    print ("Not Agreed")
