from cs50 import get_string

s = get_string("Input: ")
print("Output: ", end = "")
# Original
for i in range(len(s)):
    print(s[i], end= "")
print()

# Progress1
for c in s:
    print(c, end = "")
print()