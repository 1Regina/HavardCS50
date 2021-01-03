from sys import argv, exit
if len(argv) != 2: #2 bcos the one that is untyped is the first such that what i type is the second ie argv[1]
    print ("missing command-line argument")
    exit(1)
print (f"hello, {argv[1]}")
exit(0)


#  python3 exit.py  -->> missing command-line argument
#  python3 exit.py emm maa me -->> missing command-line argument
#  python3 exit.py emma  -->> hello, emma