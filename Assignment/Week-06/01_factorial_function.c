// Q1: Calculate factorial using a function. Input range: 0 to 12.
#include <stdio.h>
int factorial(int n) {
    int fact = 1;
    for (int i = 1; i <= n; i++) fact *= i;
    return fact;
}
int main(void) {
    int n;
    scanf("%d", &n);
    if (n < 0 || n > 12) printf("Invalid");
    else printf("%d", factorial(n));
    return 0;
}
