#include <stdio.h>

int main()
{
    float a, b;
    char op;

    printf("Enter expression like 5 + 3: ");
    scanf("%f %c %f", &a, &op, &b);
    if (op == '+') printf("Answer = %.2f\n", a + b);
    else if (op == '-') printf("Answer = %.2f\n", a - b);
    else if (op == '*') printf("Answer = %.2f\n", a * b);
    else if (op == '/' && b != 0) printf("Answer = %.2f\n", a / b);
    else printf("Invalid input\n");
    return 0;
}
