// Q3: Find GCD using the Euclidean algorithm.
#include <stdio.h>
int main(void) {
    int a, b, t;
    scanf("%d %d", &a, &b);
    if (a < 0) a = -a;
    if (b < 0) b = -b;
    while (b != 0) { t = b; b = a % b; a = t; }
    printf("%d", a);
    return 0;
}
