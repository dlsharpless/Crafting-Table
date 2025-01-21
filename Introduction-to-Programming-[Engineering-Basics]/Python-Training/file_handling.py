'''File Handling'''

import os

FILEPATH = os.path.join(os.path.dirname(__file__), 'movies.txt')

# FILE = open(FILEPATH, 'r', encoding='utf-8')
# content = FILE.read()
# print(content)
# FILE.close()

# FILE = open(FILEPATH, 'w', encoding='utf-8')
# FILE.write('3 Idiots')
# FILE.close()

# FAVORITE_MOVIE = input('What is your favorite movie? ')
# FILE = open(FILEPATH, 'w', encoding='utf-8')
# FILE.write(FAVORITE_MOVIE + '\n')
# FILE.close()

with open(FILEPATH, 'r', encoding='utf-8') as FILE:
    CONTENT = FILE.read()
    print(CONTENT)

FAVORITE_MOVIE = input('What is your favorite movie? ')
with open(FILEPATH, 'w', encoding='utf-8') as FILE:
    FILE.write(FAVORITE_MOVIE + '\n')
