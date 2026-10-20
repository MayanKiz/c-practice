// Q2: Find the nth Fibonacci number using recursion (0-indexed).
#include <stdio.h>
int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}
int main(void) {
    int n;
    scanf("%d", &n);
    if (n < 0 || n > 40) printf("Invalid");
    else printf("%d", fib(n));
    return 0;
}
