// Q3: Reverse the digits of an integer.
#include <stdio.h>
int main(void) {
    int n, rev = 0, sign = 1;
    scanf("%d", &n);
    if (n < 0) { sign = -1; n = -n; }
    while (n > 0) { rev = rev * 10 + n % 10; n /= 10; }
    printf("%d", rev * sign);
    return 0;
}
