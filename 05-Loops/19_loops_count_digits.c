#include <stdio.h>

int main()
{
    int number, count = 0;

    printf("Enter a number: ");
    scanf("%d", &number);
    if (number == 0) count = 1;
    while (number != 0)
    {
        count++;
        number /= 10;
    }
    printf("Digits = %d\n", count);
    return 0;
}
