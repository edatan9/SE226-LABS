def factorial(x):
    if x == 0 or x == 1:
        return 1
    return x * factorial(x - 1)

single_term = lambda x, n: (x ** n) / factorial(n)


def exp_x(x, n):
    total = 0
    for i in range(n + 1):
        total += single_term(x, i)
    return total

x_value = int(input("Enter a value: "))
terms = int(input("Enter terms: "))
print(f"Approximation of e^{x_value} using {terms} terms:", exp_x(x_value, terms))