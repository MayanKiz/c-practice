// Q2: Find the sum of integers from 1 to n.
#include <stdio.h>
int main(void) {
    int n;
    long long sum = 0;
    scanf("%d", &n);
    for (int i = 1; i <= n; i++) sum += i;
    printf("%lld", sum);
    return 0;
}
