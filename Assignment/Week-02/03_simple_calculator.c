// Q3: Perform +, -, * or / using an operator character.
#include <stdio.h>
int main(void) {
    double a, b;
    char op;
    scanf("%lf %c %lf", &a, &op, &b);
    switch (op) {
        case '+': printf("%.2f", a + b); break;
        case '-': printf("%.2f", a - b); break;
        case '*': printf("%.2f", a * b); break;
        case '/':
            if (b == 0) printf("Cannot divide by zero");
            else printf("%.2f", a / b);
            break;
        default: printf("Invalid operator");
    }
    return 0;
}
