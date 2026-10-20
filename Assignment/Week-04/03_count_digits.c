// Q3: Count digits in an integer.
#include <stdio.h>
int main(void) {
    int n, count = 0;
    scanf("%d", &n);
    if (n < 0) n = -n;
    do { count++; n /= 10; } while (n != 0);
    printf("%d", count);
    return 0;
}
