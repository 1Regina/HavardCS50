# original
print("cough")
print("cough")
print("cough")

# progress1
for i in [0,1,2]:
    print("cough")

# progress2
for i in range (3):
    print("cough")

# progress3
def main():
    for i in range (3):
        cough()

# define helper function
def cough():
    print("cough")

main()

# progress4
def main():
    cough(3)

# define helper function
def cough(n):
    for i in range (n):
        print("cough")

main()

# progress5
print("cough\n" * 3)
