import csv

counts = {}

with open ("CS50 2019 - Lecture 7 - Favorite TV Shows (Responses) - Form Responses 1.csv", "r") as file:
    reader = csv. DictReader(file)

    for row in reader:
        # # print all the titles from the csv
        # print(row["title"])

        # summarize count. force everything to lowercase so upper vs lower wont be different count
        title = row['title'].lower()

        # if title recur
        if title in counts:
            counts[title] += 1
        else: 
            counts[title]  = 1 

# # original messy chunks
# print (counts)

# # progress1 list form
# for title , count in counts.items():
#     print (title, count)

# # progress2 list form with separator and sorted by title
# for title , count in sorted(counts.items()):
#     print (title, count, sep = " | ")

# # progress3 created sort function by value
# def f(item):
#     return item[1]
# # list form with separator and sorted by value
# for title , count in sorted(counts.items(), key = f, reverse = True):
#     print (title, count, sep = " | ")

# progress4 list form with separator and sorted by value in lambda form to get rid of def f(item)
for title , count in sorted(counts.items(), key = lambda item: item[1], reverse = True):
    print (title, count, sep = " | ")