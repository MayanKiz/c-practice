n = int(input())
original = n
reverse = 0

if n < 0:
    print("not palindrome")
else:
    while n > 0:
        reverse = reverse * 10 + n % 10
        n //= 10

    if original == reverse:
        print("palindrome")
    else:
        print("not palindrome")
