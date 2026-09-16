#include <stdio.h>

int main()
{
    int number, sum = 0;
    while (1)
    {
        printf("Enter number to finish or find the sum (0 to stop): ");
        scanf("%d", &number);
        if (number == 0) break;
        sum = sum + number;
    }
    printf("Sum = %d\n", sum);
    return 0;
}
