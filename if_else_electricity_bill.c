#include <stdio.h>

int main()
{
    int units;
    float bill;
    printf("Enter units: ");
    scanf("%d", &units);
    bill = units * 5;
    if (units > 200) bill = bill - bill * 0.20;
    else if (units > 100) bill = bill - bill * 0.10;
    printf("Bill = %.2f\n", bill);
    return 0;
}
