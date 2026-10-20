// Q1: Swap two integers using a temporary variable.
#include <stdio.h>
int main(void) {
    int a, b, temp;
    scanf("%d %d", &a, &b);
    temp = a; a = b; b = temp;
    printf("%d %d", a, b);
    return 0;
}
