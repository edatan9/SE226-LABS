yourNum = input("Enter an integer number ")
x = int(yourNum)

while x > 1:
    print(str(x), end=" → ")

    if x % 2 == 0:
        x = x // 2
    else:
        x = 3 * x + 1

print(x)