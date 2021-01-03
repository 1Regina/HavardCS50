import re
from cs50 import get_string

s = get_string("Do you agree?\n")

#original
if re.search("yes|y",s):
    print("Agreed.")
elif re.search("no",s):
    print("Not agreed.")

#progress1 with ? means 0 or 1 instance of thing to the left
if re.search("y(es)?",s.lower()):
    print("Agreed.")
elif re.search("no",s):
    print("Not agreed.")

#progress2. Not so strict and can accept hmmmm, yes . Also ignore upper or lowercase
if re.search("y(es)?",s, re.IGNORECASE):
    print("Agreed.")
elif re.search("n(o)?",s):
    print("Not agreed.")

#progress3. Very strict and only yes but wont allow "mmm..yes". ^ for start of string; $ for end of string. Also ignore upper or lowercase
if re.search("^y(es)?$",s, re.IGNORECASE):
    print("Agreed.")
elif re.search("^n(o)?$",s):
    print("Not agreed.")