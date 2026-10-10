#include <stdio.h>

int main(void)
{
    int n, original, reversed = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Not a palindrome\n");
        return 0;
    }

    original = n;

    while (n > 0)
    {
        reversed = reversed * 10 + n % 10;
        n /= 10;
    }

    if (original == reversed)
        printf("Palindrome\n");
    else
        printf("Not a palindrome\n");

    return 0;
}
