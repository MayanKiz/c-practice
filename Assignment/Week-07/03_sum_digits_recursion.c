// Q3: Find the sum of digits using recursion.
#include <stdio.h>
int sumDigits(int n) {
    if (n == 0) return 0;
    return n % 10 + sumDigits(n / 10);
}
int main(void) {
    int n;
    scanf("%d", &n);
    if (n < 0) n = -n;
    printf("%d", sumDigits(n));
    return 0;
}
