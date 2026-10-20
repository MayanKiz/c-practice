// Q1: Print all prime numbers from 1 to 50.
#include <stdio.h>
int main(void) {
    for (int n = 2; n <= 50; n++) {
        int prime = 1;
        for (int i = 2; i * i <= n; i++)
            if (n % i == 0) { prime = 0; break; }
        if (prime) printf("%d ", n);
    }
    return 0;
}
