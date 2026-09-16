#include <stdio.h>

int main()
{
    int a, b;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);
    if (a > b) printf("Greatest = %d\n", a);
    else printf("Greatest = %d\n", b);
    return 0;
}
