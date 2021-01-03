
from cs50 import get_string

print ("hello,world")

answer = get_string ("What's your name?\n")
# print(f"hello", ) `
 # f tell print to not print literraly "hello, {answer}" but to do a plug-in instead. f = format string
print(f"hello, {answer}")

counter = 1
counter += 1 # aka counter = counter + 1

# Case 1
# if less than 
if x < y:
    print ("x is less than y")

# Case 2
# if less than else
if x < y:
    print ("x is less than y")
else: 
    print ("x is not less than y")

# Case 3
# else if -- less than, greater than else
if x < y:
    print ("x is less than y")
elif x > y: 
    print ("x is greater than y")
else: 
    print ("x is equal to y")

# while loop . Rem to capitalise. this prints forever
# while True:
#     print ("hello, world")

# while loop or for loop
i = 3
while i > 0:
    print("cough")
    i -= 1

for i in [0,1,2,]:
    print("cough")

for i in range (3):
    print ("cough")