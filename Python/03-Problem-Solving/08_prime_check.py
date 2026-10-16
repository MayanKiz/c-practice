n = int(input())

if n < 2:
    print("not prime")
else:
    is_prime = True
    for divisor in range(2, int(n ** 0.5) + 1):
        if n % divisor == 0:
            is_prime = False
            break

    print("prime" if is_prime else "not prime")
