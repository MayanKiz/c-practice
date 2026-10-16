n = int(input("how many numbers? "))
total = 0

for _ in range(n):
    number = int(input())
    total += number

print("sum:", total)
