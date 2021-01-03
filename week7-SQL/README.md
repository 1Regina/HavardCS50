## Initialise sql and imports##
1.   sqlite3 
2.   .mode csv
3.   .import "CS50 2019 - Lecture 7 - Favorite TV Shows (Responses) - Form Responses 1.csv"

## Query and checking ##
4.   ctrl d to exit
5.   sqlite3 favourites.db   ((or sqlite3 directorypath/database.db))
6.   .mode csv
7.   .import "CS50 2019 - Lecture 7 - Favorite TV Shows (Responses) - Form Responses 1.csv" favourites
8.   ls in directory outside and see new favourites.db
9.   sqlite3 favourites.db 
10.  SELECT title FROM favourites ORDER BY title;
11.  SELECT title, COUNT (title) FROM favourites GROUP BY title;
12.  SELECT title, COUNT (title) AS n FROM favourites GROUP BY title LIMIT 10;
13.  SELECT title, COUNT (title) AS n FROM favourites GROUP BY title ORDER BY n DESC LIMIT 10;

## Check , Display and Edit db ##
14.  .schema

15.  SELECT DISTINCT(title) FROM favourites;
16.  SELECT title FROM favourites WHERE title LIKE "%office%"; 
17.  SELECT COUNT(title) FROM favourites WHERE title LIKE "%office%"; 
18.  UPDATE favourites SET title = "The Office" WHERE title LIKE "%office%";
19.  SELECT title FROM favourites WHERE title LIKE "%office%"; 
20.  DELETE FROM favourites WHERE title LIKE "%friends%"; ((Beware may delete other shows with friends e.g best friends wedding))
21.  CAREFUL !! DROP table Favorite (( delete entire table))

## Get from url and create ##
22.  wget https:.//  ( to get a file link)
23.  gunzip  filename.gz

24.  touch show3.db (( to create an empty file))

## More commands after python3 import3.py (AND) sqlite3 shows3.db ##
25.  SELECT * FROM shows LIMIT 10;
26.  SELECT COUNT(*) FROM shows;
27.  SELECT COUNT(*) FROM shows WHERE startYear = 2019;
28.  SELECT * FROM shows WHERE primaryTitle = "The Office";
29.  SELECT COUNT(*) FROM shows WHERE genres LIKE "%Comedy%" AND startYear = 2019;

## More commands after python3 import4.py (AND) sqlite3 shows4.db (for linking/joining tables query) ##
30.  .schema (( show 2 tables -- shows and genres))
31.  SELECT * FROM shows WHERE title = "The Crown";
32.  SELECT * FROM genres WHERE show_id = 4786824;
33.  SELECT * FROM shows WHERE id IN (SELECT show_id FROM genres WHERE genre = "Comedy") AND year = 2019;
34.  SELECT COUNT(*) FROM shows WHERE id IN (SELECT show_id FROM genres WHERE genre = "Comedy") AND year = 2019;

## Table joinng query using the combined db of tables which filtered out < 1970 and non-tv series. Can use db browser for gui ##
35.  sqlite3 shows.db
36.  .schema
37.  SELECT * FROM shows JOIN genres ON shows.id = genres.show_id LIMIT 10; 
38.  SELECT * FROM shows JOIN genres ON shows.id = genres.show_id WHERE title = "The Office" AND year = 2005; 
39.  SELECT * FROM shows JOIN genres ON shows.id = genres.show_id WHERE title = "The Crown" AND year = 2016; 
### Check out other tables  ###
40.  SELECT * FROM people WHERE name = "Ellen DeGeneres";
41.  SELECT * FROM stars WHERE person_id = 1122;
42.  (same as above) SELECT * FROM stars WHERE person_id = (SELECT id FROM people WHERE name = "Ellen DeGeneres");
### Back to table joining with WHERE and IN ###
43.  SELECT * FROM shows WHERE id IN (SELECT show_id FROM stars WHERE person_id = (SELECT id FROM people WHERE name = "Ellen DeGeneres"));
44.  SELECT title FROM 
        people JOIN stars ON people.id = stars.person_id JOIN 
        shows ON stars.show_id = shows.id
        WHERE name = "Ellen DeGeneres";

## Create B-trees and index to store data to reduce search time so it wont cost O(n) ##
45.  CREATE INDEX person_index ON stars (person_id);
46.  CREATE INDEX show_index ON stars (show_id);
47.  CREATE INDEX name_index ON people (name);