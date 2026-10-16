#include <stdio.h>

int main(void)
{
    int n, original, digits = 0, digit;
    int sum = 0;

    printf("Enter a non-negative integer: ");
    scanf("%d", &n);

    if (n < 0)
    {
        printf("Not an Armstrong number\n");
        return 0;
    }

    original = n;

    int temp = n;
    do
    {
        digits++;
        temp /= 10;
    } while (temp > 0);

    temp = n;
    do
    {
        digit = temp % 10;

        int power = 1;
        for (int i = 0; i < digits; i++)
            power *= digit;

        sum += power;
        temp /= 10;
    } while (temp > 0);

    if (sum == original)
        printf("Armstrong number\n");
    else
        printf("Not an Armstrong number\n");

    return 0;
}
