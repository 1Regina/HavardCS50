# end = """ to override the default end = "\n". Objective is to remove a blank line.

# 4 bricks horizontally
# original
for i in range(4):
    print ("?", end = "")
print()

# progress1
print("?" * 4)

# 4 bricks stack
# original
for i in range (3):
    print ("#")
# progress1
print ("&\n" * 3, end = "")

# 3 by 3 brick
# original
for i in range (3):
    for j in range (3):
        print ("#", end = "")
    print ()