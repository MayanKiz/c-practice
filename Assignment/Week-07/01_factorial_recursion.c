// Q1: Calculate factorial using recursion. Input range: 0 to 12.
#include <stdio.h>
int fact(int n) {
    if (n <= 1) return 1;
    return n * fact(n - 1);
}
int main(void) {
    int n;
    scanf("%d", &n);
    if (n < 0 || n > 12) printf("Invalid");
    else printf("%d", fact(n));
    return 0;
}
