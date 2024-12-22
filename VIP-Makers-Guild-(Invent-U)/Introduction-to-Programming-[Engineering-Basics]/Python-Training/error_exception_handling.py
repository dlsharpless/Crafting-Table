'''Error/Exception Handling'''

# def is_even(number):
#     '''Yield whether a given number is even'''
#     return bool(number % 2 == 0)

# # Testing the function
# print(is_even(4))
# print(is_even(5))

# try:
#     a = 10 / 0
#     print('The result is:', a)
# except ZeroDivisionError:
#     print('Error: Cannot divide by zero.')
# finally:
#     print('Execution completed.')

# try:
#     X = int(input('Enter a number: '))
#     RESULT = 10 / X
# except ValueError:
#     print('Error: Invalid input. Not an integer.')
# except ZeroDivisionError:
#     print('Error: Cannot divide by zero.')
# else:
#     print('The result is:', RESULT)
# finally:
#     print('Execution completed.')

def check_positive(number):
    '''Check if a number is positive'''
    if number < 0:
        raise ValueError('The number must be positive.')
    return True

try:
    X = int(input('Enter a number: '))
    check_positive(X)
except ValueError as E:
    print('Error:', E)
else:
    print('The number is positive.')
finally:
    print('Execution completed.')
