// Q1: Print the multiplication table of n from 1 to 10.
#include <stdio.h>
int main(void) {
    int n;
    scanf("%d", &n);
    for (int i = 1; i <= 10; i++)
        printf("%d x %d = %d\n", n, i, n * i);
    return 0;
}
