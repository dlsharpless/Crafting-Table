'''Introduction to Programming [Engineering Basics]'''

# print('Hello world!')

# A = 3
# print('A is =', A, 'and it is a', type(A))
# B = 3.5
# print('B is =', B, 'and it is a', type(B))
# C = 'I am a string'
# print('C is =', C, 'and it is a', type(C))

# D = 3
# E = 2.75
# F = D + E
# print('D is =', D, 'and it is a', type(D))
# print('E is =', E, 'and it is a', type(E))
# print('F is =', F, 'and it is a', type(F))

# G = 'Hello '
# H = 'world!'
# I = G + H
# print('G is =', G, 'and it is a', type(G))
# print('H is =', H, 'and it is a', type(H))
# print('I is =', I, 'and it is a', type(I))

# J = 5 + 2
# print(J)
# K = 5 - 2
# print(K)
# L = 5 * 2
# print(L)
# M = 5 / 2
# print(M)

# N = 'Hello!' * 3
# print(N)

# AGE = 19
# if AGE < 18:
#     print('You are too young to vote.')
# elif AGE == 18:
#     print('Congratulations on reaching voting age!')
# else:
#     print('You are eligible to vote.')

# CALC_PROD = 0 * 1 * 2 * 3 * 4 * 5 * 6 * 7 * 8 * 9
# print(CALC_PROD)

# FRIENDS = ['Anna', 'Bob', 'Charlie']
# for FRIEND in FRIENDS:
#     print('Hello, ' + FRIEND + '!')

# USER_INPUT = ''
# while USER_INPUT.lower() != "stop":
#     USER_INPUT = input('Enter something (type "stop" to end): ')

# for I in range(10):
#     if I != 3:
#         print(I)
#     if I == 7:
#         break

# PASSWORD = "password"
# USER_INPUT = ''
# ATTEMPTS = 0
# while ATTEMPTS < 3:
#     USER_INPUT = input('Enter password:')
#     if USER_INPUT == PASSWORD:
#         print("Welcome")
#         break
#     if ATTEMPTS == 2:
#         print("Unauthorized access")
#     ATTEMPTS += 1

# PASSWORD = "password"
# USER_INPUT = ''
# for I in range(3):
#     USER_INPUT = input('Enter password:')
#     if USER_INPUT == PASSWORD:
#         print("Welcome")
#         break
#     if I == 2:
#         print("Unauthorized access")

# GROCERY_LIST = ['apple', 'milk', 'banana']
# GROCERY_LIST[0] = 'bread'
# GROCERY_LIST[1] = 'juice'
# GROCERY_LIST[2] = 'soda'
# print(GROCERY_LIST)

# GROCERY_LIST = ['apple', 'milk', 'banana']
# GROCERY_LIST.append('chocolate')
# GROCERY_LIST.remove('banana')
# GROCERY_LIST.sort()
# print(GROCERY_LIST)

# CAR_DICTIONARY = {
#     'brand': 'Ford',
#     'model': 'Mustang',
#     'year': 1964
# }
# CAR_DICTIONARY['color'] = 'red'
# print(CAR_DICTIONARY.values())
# print(CAR_DICTIONARY.keys())

# YOUR_GROCERY = {'apple', 'banana', 'milk'}
# MY_GROCERY = {'banana', 'bread', 'chocolate'}
# print(YOUR_GROCERY.union(MY_GROCERY))
# print(YOUR_GROCERY.intersection(MY_GROCERY))

# GROCERY_LIST = {'apple', 'banana', 'milk', 'bread'}
# # Print first single element found
# for ITEM in GROCERY_LIST:
#     print(ITEM)
#     break
# # Print specified element if found
# TARGET_OUTPUT = 'milk'
# for ITEM in GROCERY_LIST:
#     if ITEM == TARGET_OUTPUT:
#         print(ITEM)

# def greet():
#     '''Greet the user'''
#     print('Hello, everyone!')
# greet()

def add_numbers(x, y):
    '''Add given numbers together'''
    return x + y
RESULT = add_numbers(5, 3)
print('The result is:', RESULT)
