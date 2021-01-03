words = set()

def check (word):
    if word.lower in words:
        return True
    else:
        return False

 
def load(dicitonary):
    file = open(dictioinary, "r")
    for line in file:
        words.add(line.rstrip("\n"))
    file.close()
    return True

def size():
    return len (words)

# dont need to do free memory
def unload():
    return True