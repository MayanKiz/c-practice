n = int(input())
result = 1

if n < 0:
    print("factorial is not defined for negative numbers")
else:
    for number in range(1, n + 1):
        result *= number
    print(result)
