// Q2: Print the first 10 Fibonacci numbers.
#include <stdio.h>
int main(void) {
    int a = 0, b = 1;
    for (int i = 0; i < 10; i++) {
        printf("%d ", a);
        int next = a + b;
        a = b; b = next;
    }
    return 0;
}
