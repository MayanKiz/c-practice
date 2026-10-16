n = int(input())
sign = -1 if n < 0 else 1
n = abs(n)
reverse = 0

while n > 0:
    reverse = reverse * 10 + n % 10
    n //= 10

print(sign * reverse)
