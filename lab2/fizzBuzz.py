yourNum = int(input("Please enter a number between 10 and 100: "))

while yourNum < 10 or yourNum > 100:
    yourNum = int(input("Invalid input. Please enter a number between 10 and 100: "))

fizz_count = 0
buzz_count = 0
fizzbuzz_count = 0

for x in range(1, yourNum + 1):

    if x % 7 == 0:
        print("skipped")
        continue

    if x % 3 == 0 and x % 5 == 0:
        print("FizzBuzz")
        fizzbuzz_count += 1

    elif x % 3 == 0:
        print("Fizz")
        fizz_count += 1

    elif x % 5 == 0:
        print("Buzz")
        buzz_count += 1

    else:
        print(x)

print("Summary")
print("Fizz count:", fizz_count)
print("Buzz count:", buzz_count)
print("FizzBuzz count:", fizzbuzz_count)
