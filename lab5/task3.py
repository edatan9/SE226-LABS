S = 0
def recursive_series(n):
    global S
    if n == 0:
        return
    recursive_series(n - 1)
    S += ((-1) ** (n + 1)) * (1 / n)

n = int(input("Enter a number: "))
recursive_series(n)
print(f"S{n} = {S}")