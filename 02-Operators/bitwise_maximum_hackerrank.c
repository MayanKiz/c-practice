#include <stdio.h>

int main() {
    int n, k;
    scanf("%d %d", &n, &k);

    int max_and = 0, max_or = 0, max_xor = 0;

    for (int a = 1; a <= n; a++) {
        for (int b = a + 1; b <= n; b++) {
            int x = a & b;
            int y = a | b;
            int z = a ^ b;

            if (x < k && x > max_and)
                max_and = x;

            if (y < k && y > max_or)
                max_or = y;

            if (z < k && z > max_xor)
                max_xor = z;
        }
    }

    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
    return 0;
}
