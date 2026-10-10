#include <stdio.h>

void calculate_the_maximum(int n, int k)
{
    int max_and = 0;
    int max_or = 0;
    int max_xor = 0;

    for (int a = 1; a <= n; a++)
    {
        for (int b = a + 1; b <= n; b++)
        {
            int and_result = a & b;
            int or_result = a | b;
            int xor_result = a ^ b;

            if (and_result < k && and_result > max_and)
                max_and = and_result;

            if (or_result < k && or_result > max_or)
                max_or = or_result;

            if (xor_result < k && xor_result > max_xor)
                max_xor = xor_result;
        }
    }

    printf("%d\n%d\n%d\n", max_and, max_or, max_xor);
}

int main(void)
{
    int n, k;
    scanf("%d %d", &n, &k);

    calculate_the_maximum(n, k);
    return 0;
}
