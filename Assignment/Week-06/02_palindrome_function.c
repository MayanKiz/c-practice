// Q2: Check whether an integer is a palindrome using a function.
#include <stdio.h>
int isPalindrome(int n) {
    int original = n, rev = 0;
    if (n < 0) return 0;
    do { rev = rev * 10 + n % 10; n /= 10; } while (n > 0);
    return original == rev;
}
int main(void) {
    int n;
    scanf("%d", &n);
    printf(isPalindrome(n) ? "Palindrome" : "Not Palindrome");
    return 0;
}
