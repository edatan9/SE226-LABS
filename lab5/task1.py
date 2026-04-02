def factorial(x):
    if x == 0 or x == 1:
        return 1
    return x * factorial(x - 1)

y=int(input("Enter a number: "))